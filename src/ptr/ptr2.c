#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;

  int *pi = &i;
  void *v = pi;
  double *pd = (double *)v;
  *pd = 0.1;

  printf("%d %g", i, *pd);

  return EXIT_SUCCESS;
}
