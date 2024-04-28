#include <assert.h>
#include <stdio.h>

void minmax(int nums[], int nums_cnt, int *min, int *max);
int *loc_min(int *x, int *y);
int main(void) {
  int nums[5] = {1, 2, 3, 4, 5};
  int min;
  int max;

  minmax(nums, 5, &min, &max);

  assert(min == 1);
  assert(max == 5);

  int *p = loc_min(&min, &max);
  assert(p == &min);
  printf("min: %d(%p)\nmax: %d(%p)\n", min, (void *)&min, max, (void *)&max);

  return 0;
}

void minmax(int nums[], int nums_cnt, int *min, int *max) {
  assert(nums_cnt > 0);
  *min = nums[0];
  *max = nums[0];
  for (int i = 1; i < nums_cnt; i++) {
    if (nums[i] < *min) {
      *min = nums[i];
    } else if (nums[i] > *max) {
      *max = nums[i];
    }
  }
}

int *loc_min(int *x, int *y) {
  if (*x < *y) {
    return x;
  } else {
    return y;
  }
}
