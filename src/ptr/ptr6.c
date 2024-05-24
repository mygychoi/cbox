#include <assert.h>
#include <stdlib.h>

int main(void) {
  int num1 = 1;
  int num2 = 2;
  const int num3 = 3;

  int *p;
  p = &num1;
  *p = num1;
  p = &num2;
  *p = num2;
  assert(*p == num2 && p == &num2);

  const int *pci;
  pci = &num1;
  assert(*pci == num1 && pci == &num1);
  pci = &num2;
  assert(*pci == num2 && pci == &num2);
  pci = &num3;
  assert(*pci == num3 && pci == &num3);

  int *const cpi = &num1;
  *cpi = num2;
  assert(*cpi == num2 && cpi == &num1);

  const int *const cpc1 = &num1;
  const int *const cpc2 = &num2;
  const int *const *pcpci = &cpc2;
  assert(**pcpci == num2 && *pcpci == &num2 && pcpci == &cpc2);

  return EXIT_SUCCESS;
}
