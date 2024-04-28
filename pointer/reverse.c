#include <stdio.h>

#define N 5

int main(void) {
  int nums[N] = {1, 2, 3, 4, 5};
  int *p = nums + N;

  while (p > nums) {
    printf("%d ", *--p);
  }

  for (p = nums + N; p > nums;) {
    printf("%d ", *--p);
  }

  for (int *p = nums, *q = nums + N - 1; p < q; p++, q--) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
  }
  for (int i = 0; i < N; i++) {
    printf("%d ", nums[i]);
  }

  return 0;
}
