#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void arrprint(const int arr[], const size_t size) {
  const int *end = arr + size;
  while (arr < end) {
    printf("%5d", *arr++);
  }
}

void arrprintrev(const int arr[], const size_t size) {
  const int *begin = arr + size - 1;
  while (begin >= arr) {
    printf("%5d", *begin--);
  }
}

size_t length(const int *begin, const int *end) {
  ptrdiff_t size = end - begin;
  return size;
}

int main(void) {
  int nums[SIZE] = {1, 2, 3, 4, 5};
  arrprint(nums, SIZE);
  arrprintrev(nums, SIZE);

  return EXIT_SUCCESS;
}
