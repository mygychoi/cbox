#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *g = "Hello";
char ga[] = "Hello";

int main(void) {
    // g[1] = 'A';
    ga[1] = 'A';

    static const char *s = "Hello";
    static char sa[] = "Hello";

    // s[1] = 'A';
    sa[1] = 'A';

    const char *l = "Hello";
    char la[] = "Hello";

    char *h = malloc(strlen("Hello") + 1);
    strcpy(h, "Hello");

    // *header = 'G';

    printf("global:  %p\n", (void *)g);
    printf("global array:%p \n", (void *)ga);
    printf("static:  %p\n", (void *)s);
    printf("static array:%p \n", (void *)sa);
    printf("local:  %p\n", (void *)l);
    printf("local array:%p \n", (void *)la);
    printf("h:%p \n", (void *)h);

    return EXIT_SUCCESS;
}
