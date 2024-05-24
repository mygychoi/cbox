#include <stdio.h>

#define PRINT_INT(i) printf(#i " = %d\n", i)
#define PRINT_FLOAT(i) printf(#i " = %f\n", i)

#define max_(type)                                                             \
  type max_##type(type x, type y) { return x > y ? x : y; }

max_(int) max_(float)

    int main(void) {
  PRINT_INT(max_int(1, 2));
  PRINT_FLOAT(max_float(1., 2.));
  return 0;
}
