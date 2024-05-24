#include <stdio.h>

int main(void) {
  int curr;
  int until;

  curr = 1;
  scanf("%d", &until);

  while (curr <= until) {
    printf("%10d%10d\n", curr, curr * curr);
    curr++;
  }

  return 0;
}
