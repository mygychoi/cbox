#include <stdio.h>

int main(void) {
  int num1, denom1, num2, denom2;
  int res_num, res_denom;

  scanf("%d/%d%d/%d", &num1, &denom1, &num2, &denom2);

  res_num = num1 * denom2 + num2 * denom1;
  res_denom = denom1 * denom2;

  printf("%d/%d", res_num, res_denom);

  return 0;
}
