#include <stdio.h>
#include <stdlib.h>

void foo(int a, int b) {
    int c;
    int d;
    for (int i = 1; i <= 10; i++) {
        // printf("i %d\n", (int)&i - (int)&c);
        break;
    }
    int e = 1;

    printf("a %p\n", (void *)&a);
    printf("b %p\n", (void *)&b);
    printf("c %p\n", (void *)&c);
    printf("d %p\n", (void *)&d);
    printf("e %p\n", (void *)&e);
}

void abc(int a, int b) {
    printf("hello\n");
    foo(1, 2);
}

int main(void) {
    abc(0, 0);
    return EXIT_SUCCESS;
}
