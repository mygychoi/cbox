#include <stdio.h>
void decompose(double x, long *int_part, double *frac_part);

int main(void) {
  int a;
  long int_part;
  double frac_part;
  decompose(3.14, &int_part, &frac_part);

  printf("%ld %.2f", int_part, frac_part);
  return 0;
}

void decompose(double x, long *int_part, double *frac_part) {
  *int_part = (long)x;
  *frac_part = x - *int_part;
}
