#include <assert.h>

#include "stack.h"

#define MAX_SIZE 10

int nums[MAX_SIZE];
int top = -1;

void make_empty(void) { top = -1; }

bool is_empty(void) { return top == -1; }

bool is_full(void) { return top == MAX_SIZE - 1; }

void push(int num) {
  assert(!is_full());
  nums[++top] = num;
}

int pop(void) {

  assert(!is_empty());
  return nums[top--];
}
