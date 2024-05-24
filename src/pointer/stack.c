#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#define SIZE 10

int nums[SIZE];
int *top;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int num);
int pop(void);

int main(void) {
  make_empty();
  int num = 1;
  while (!is_full()) {
    push(num);
    printf("%d ", num);
    num++;
  }
  while (!is_empty()) {
    num = pop();
    printf("%d ", num);
  }

  return 0;
}

void make_empty(void) { top = &nums[0]; }

bool is_empty(void) { return top == &nums[0]; }

bool is_full(void) { return top == &nums[SIZE]; }

void push(int num) {
  assert(!is_full());
  *top++ = num;
}

int pop(void) {
  assert(!is_empty());
  return *--top;
}
