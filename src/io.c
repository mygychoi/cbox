#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Wrong argument usage\n");
        exit(EXIT_FAILURE);
    }
    const char *file_name = argv[1];
    FILE *fp = fopen(file_name, "r");
    if (!fp) {
        fprintf(stderr, "You can't open '%s'\n", file_name);
        exit(EXIT_FAILURE);
    }
    printf("You can open '%s'\n", file_name);
    fclose(fp);
    return EXIT_SUCCESS;
}
