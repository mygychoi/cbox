#include <stdio.h>
#include <stdlib.h>

#define BUFF_SIZE (1024)

FILE *sfopen(const char *restrict filename, const char *restrict mod) {
    FILE *fp = fopen(filename, mod);
    if (fp == NULL) {
        fprintf(stderr, "Fail to open %s", filename);
        exit(EXIT_FAILURE);
    }
    return fp;
}

void checkwrite(FILE *const fp, const char *restrict filename) {
    if (feof(fp)) {
        fprintf(stderr, "Fail to write on %s\n", filename);
        remove(filename);
        exit(EXIT_FAILURE);
    }
}

void copy_per_byte(const char *restrict src, const char *restrict dest) {
    char c;
    FILE *sfp = sfopen(src, "rb");
    FILE *dfp = sfopen(dest, "wb");
    while ((c = getc(sfp)) != EOF) {
        putc(c, dfp);
        checkwrite(dfp, dest);
    }
    fclose(sfp);
    fclose(dfp);
}

void copy_per_line(const char *restrict src, const char *restrict dest) {
    char buffer[BUFF_SIZE];
    FILE *sfp = sfopen(src, "rb");
    FILE *dfp = sfopen(dest, "wb");
    while ((fgets(buffer, BUFF_SIZE, sfp) != NULL)) {
        fputs(buffer, dfp);
        checkwrite(dfp, dest);
    }
    fclose(sfp);
    fclose(dfp);
}

void copy_per_block(const char *restrict src, const char *restrict dest) {
    char buffer[BUFF_SIZE];
    size_t read;
    FILE *sfp = sfopen(src, "rb");
    FILE *dfp = sfopen(dest, "wb");
    while ((read = fread(buffer, sizeof(char), BUFF_SIZE, sfp))) {
        fwrite(buffer, sizeof(char), read, dfp);
        checkwrite(dfp, dest);
    }
    fclose(sfp);
    fclose(dfp);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Wrong args\n");
        exit(EXIT_FAILURE);
    }

    copy_per_byte(argv[1], argv[2]);
    copy_per_line(argv[1], argv[2]);
    copy_per_block(argv[1], argv[2]);

    return EXIT_SUCCESS;
}
