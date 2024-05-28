#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int *tmp;
    {
        int num = 10;
        tmp = &num;
    }
    printf("here %d\n", *tmp);

    char *str1, *str2;
    str1 = malloc(13);
    assert(str1 != NULL);
    strcpy(str1, "0123456789AB");
    str2 = realloc(str1, 8);
    str1 = NULL;
    assert(str2 != NULL);
    *(str2 + 7) = '\0';

    printf("%s %s\n", str1, str1);
    printf("%s %s\n", str2, str2);

    free(str2);
    str2 = NULL;

    return EXIT_SUCCESS;
}
