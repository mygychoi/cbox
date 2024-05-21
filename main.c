#include <stdio.h>

#include "stack.h"

int main(void) {
  Item i;
  Stack s = init();

  for (i = 0; i < 10; i++) {
    push(s, i);
  }

  while (!is_empty(s)) {
    i = pop(s);
    printf("%d", i);
  }

  for (i = 0; i < 10; i++) {
    push(s, i);
  }

  while (!is_empty(s)) {
    i = pop(s);
    printf("%d", i);
  }

  return 0;
}
