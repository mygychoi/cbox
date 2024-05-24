#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int rnum;
  int unum;

  srand(time(NULL));
  rnum = rand() % 100;
  while (true) {
    printf("Guess what number it is: ");
    scanf("%d", &unum);
    if (unum == rnum) {
      printf("You got it %d\n", rnum);
      return 0;
    } else if (unum > rnum) {
      printf("%d is the bigger than\n", unum);
    } else {
      printf("%d is the smaller than\n", unum);
    }
  }

  // unreachable
  return 1;
}
