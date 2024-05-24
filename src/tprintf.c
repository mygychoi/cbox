#include <stdio.h>

int main(void) {
  int i = 40;
  float x = 89.21f;

  printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
  printf("|%10.3f|%10.3e|%-.5g\n\a", x, x, x);
}
