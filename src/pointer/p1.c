#include <assert.h>

int *find_largest(int *a, int n);

int main(void) {
  int nums[5] = {1, 2, 3, 4, 5};

  assert(find_largest(nums, 5) == &nums[4]);
  assert(find_largest(&nums[1], 3) == &nums[3]);

  return 0;
}

int *find_largest(int *a, int n) {
  int *largest = a;
  int *curr = a;
  while (curr < a + n) {
    if (*curr > *largest) {
      largest = curr;
    }
    curr++;
  }
  return largest;
}
