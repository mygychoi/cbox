#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define COUNT 5

enum CMP {
    LESS = -1,
    EQUAL = 0,
    GREATER = 1,
};

enum CMP arraycmp(int nums1[], size_t cnt1, int nums2[], size_t cnt2) {
    size_t min = cnt1 < cnt2 ? cnt1 : cnt2;
    for (size_t i = 0; i < min; i++) {
        if (nums1[i] < nums2[i]) {
            return LESS;
        } else if (nums1[i] < nums2[i]) {
            return GREATER;
        }
    }
    if (cnt1 == cnt2) {
        return EQUAL;
    } else {
        return cnt1 < cnt2 ? LESS : GREATER;
    }
}

void arraycombine(int nums1[], size_t cnt1, int nums2[], size_t cnt2, int out[]) {
    for (size_t i = 0; i < cnt1; i++) {
        out[i] = nums1[i];
    }
    for (size_t i = 0; i < cnt2; i++) {
        out[i + cnt1] = nums2[i];
    }
}

size_t strcnt(const char string[]) {
    size_t cnt = 0;
    while (*string != '\0') {
        cnt++;
        string++;
    }
    return cnt;
}

int main(void) {
    double nums[COUNT] = {
        [0] = 9.0,
        [1] = 2.9,
        [4] = 3.E+25,
        [3] = .00007,
    };
    for (size_t i = 0; i < COUNT; i++) {
        printf("element %zu is %g, \tits square is %g\n", i, nums[i], nums[i] * nums[i]);
    }

    char helloworld[] = "hello world!";
    assert(strcnt(helloworld) == 12);

    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {6, 7, 8, 9, 10};
    int nums3[10];
    arraycombine(nums1, 5, nums2, 5, nums3);

    int answer[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    assert(arraycmp(nums3, 10, answer, 10) == EQUAL);

    return EXIT_SUCCESS;
}
