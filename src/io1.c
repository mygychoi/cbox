#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buffer[1024];
    while (!feof(stdin)) {
        if (fgets(buffer, 1024, stdin) != NULL) {
            printf("%s", buffer);
        }
    }
    printf("EOF reached\n");
    return EXIT_SUCCESS;
}
