#include <stdio.h>

#define BASE 10

int main(void) {
  int cnt = 1;
  int num;

  scanf("%d", &num);
  while (num >= BASE) {
    num /= BASE;
    if (num != 0) {
      cnt++;
    }
  }
  printf("%d %d", num, cnt);

  return 0;
}
