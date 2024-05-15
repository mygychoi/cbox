#include <assert.h>

#include "list.h"
#include "utils.h"

int cmp(const void *p, const void *q) {
  return *(const int *)p - *(const int *)q;
}

int main(void) {
  struct LinkdedList ll = llnew();
  for (size_t i = 1; i <= 5; i++) {
    llappendend(&ll, i);
  }
  for (size_t i = 6; i <= 10; i++) {
    llappendbegin(&ll, i);
  }
  assert(ll.size == 10);
  llprint(&ll);

  struct Node *ten = llfind(&ll, 10);
  assert(ten->value == 10);
  nodeprint(ten);

  llclear(&ll);
  assert(llempty(&ll));
  llprint(&ll);

  int nums[5] = {5, 4, 3, 2, 1};
  qsort(nums, sizeof(nums) / sizeof(nums[0]), sizeof(nums[0]), cmp);
  print_nums(nums, sizeof(nums) / sizeof(nums[0]));

  return 0;
}
