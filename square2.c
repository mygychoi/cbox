#include <stdio.h>

int main(void) {

  int until;
  int curr;

  scanf("%d", &until);
  for (curr = 1; curr <= until; curr++) {
    printf("%10d%10d\n", curr, curr * curr);
  }

  return 0;
}
