#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num = 5;
  int *p = &num;

  printf("%d %p", *p, (void *)p);

  return EXIT_SUCCESS;
}
