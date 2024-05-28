#include "ptr.h"

int main(void) {

    int *nums = smalloc(sizeof(int) * 10);
    for (size_t i = 0; i < 10; i++) {
        nums[i] = i;
    }
    sfree(nums);
    assert(nums == NULL);

    return EXIT_SUCCESS;
}
