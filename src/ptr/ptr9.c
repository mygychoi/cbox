#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int *init_vec(int (*vec)[], size_t size, int value) {
    vec = malloc(sizeof(int) * size);
    assert(vec != NULL);
    for (size_t i = 0; i < size; i++) {
        (*vec)[i] = value;
    }
    return *vec;
}

int main(void) {

    int nums[5];
    init_vec(&nums, 5, 1);
    assert(nums[0] == 1);
    assert(nums[4] == 1);

    return EXIT_SUCCESS;
}
