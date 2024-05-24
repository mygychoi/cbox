#include <stdio.h>

int main(void) {
  unsigned length = 0;
  printf("Enter you message: ");

  while (getchar() != '\n') {
    length++;
  }
  printf("The length of your message is %u", length);

  return 0;
}
