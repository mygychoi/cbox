#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char name[100];
    char *names[30];

    for (size_t i = 0; i < 30; i++) {
        printf("Enter a name: ");
        scanf("%s", name);
        if (strcmp(name, "quit") == 0) {
            break;
        }

        char *read = malloc(sizeof(char) * (strlen(name + 1)));
        strcpy(read, name);
        names[i] = read;
    }

    for (size_t i = 0; i < 30; i++) {
        printf("%s\n", names[i]);
    }

    return EXIT_SUCCESS;
}
