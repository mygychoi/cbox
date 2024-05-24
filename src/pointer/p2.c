#include <assert.h>
#include <stdio.h>

#define R 2
#define C 5

const int *find_largest(const int *const begin, const int *const end);

int main(void) {
  int nums[R][C] = {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10},
  };

  for (int *p = nums[0]; p < nums[0] + C; p++) {
    *p = 0;
  }

  for (int(*p)[C] = nums; p < nums + R; p++) {
    (*p)[4] = 10;
  }

  assert(find_largest(nums[0], nums[0] + C) == &nums[0][4]);
  assert(find_largest(nums[1], nums[1] + C) == &nums[1][C - 1]);
  assert(find_largest(nums[0], nums[0] + R * C) == &nums[0][4]);

  int *p = nums[0];
  while (p <= &nums[R - 1][C - 1]) {
    printf("%d ", *p);
    p++;
  }

  printf("\n");
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      printf("%4d", nums[i][j]);
    }
    printf("\n");
  }

  return 0;
}

const int *find_largest(const int *const begin, const int *const end) {
  const int *largest = begin;
  const int *curr = begin;
  while (curr < end) {
    if (*curr > *largest) {
      largest = curr;
    }
    curr++;
  }
  return largest;
}
