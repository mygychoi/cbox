#include <stdio.h>

#include "collections/stack.h"

int main(void) {
  int num;
  make_empty();

  num = 1;
  while (!is_full()) {
    push(num);
    num++;
  }
  while (!is_empty()) {
    num = pop();
    printf("%d", num);
  }

  return 0;
}
