#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *error = "Error: ";
    const char *message = "Not enough memery";

    // char *err_msg = malloc(strlen(error) + strlen(message) + 1);
    // strcat(strcat(err_msg, error), message);
    // printf("%s", err_msg);
    char foo[100];
    strcat(strcat(foo, error), message);
    printf("%s", foo);

    return EXIT_SUCCESS;
}
