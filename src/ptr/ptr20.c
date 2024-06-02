#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *nums[5] = {NULL};
    for (size_t i = 0; i < 5; i++) {
        *(nums + i) = malloc(sizeof(int));
        **(nums + i) = i;
    }

    for (size_t i = 0; i < 5; i++) {
        printf("%3d %p", **(nums + i), (void *)*(nums + i));
    }
    for (size_t i = 0; i < 5; i++) {
        free(*(nums + i));
    }
    return EXIT_SUCCESS;
}
