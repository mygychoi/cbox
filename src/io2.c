#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;
    while ((c = getchar()) != EOF)
        printf("%c", c);
    return EXIT_SUCCESS;
}
