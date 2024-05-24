#include <stdio.h>
#include <stdlib.h>

int main(void) {
  size_t psize = sizeof(int *);
  size_t vsize = sizeof(void *);
  size_t csize = sizeof(char *);
  printf("%zu %zu %zu", psize, vsize, csize);

  return EXIT_SUCCESS;
}
