#include <assert.h>

int sum_a1(int nums[], int n);
int sum_a2(int nums[], int n);
int sum_p1(int *start, int n);
int sum_p2(int *start, int *end);

int main(void) {
  int nums[] = {1, 2, 3, 4, 5};
  assert(sum_a1(nums, 5) == 15);
  assert(sum_a2(nums, 5) == 15);
  assert(sum_p1(&nums[0], 5) == 15);
  assert(sum_p2(&nums[0], &nums[5]) == 15);

  return 0;
}

int sum_a1(int nums[], int n) {
  int sum = 0;
  for (int i = 0; i < n;) {
    sum += nums[i++];
  }
  return sum;
}

int sum_a2(int nums[], int n) {
  int sum = 0;
  for (int *curr = &nums[0]; curr < &nums[n];) {
    sum += *curr++;
  }
  return sum;
}

int sum_p1(int *start, int n) {
  int sum = 0;
  int *curr = start;
  while (curr < start + n) {
    sum += *curr++;
  }
  return sum;
}

int sum_p2(int *start, int *end) {
  int sum = 0;
  int *curr = start;
  while (curr < end) {
    sum += *curr++;
  }
  return sum;
}
