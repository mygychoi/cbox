#include <stdio.h>
#include <stdlib.h>

#define NUMS 3

int main(void) {
  char **bestsellings[NUMS];
  char *titles[NUMS] = {
      "1st edition",
      "2nd edition",
      "3nd edition",
  };
  for (size_t i = 0; i < NUMS; i++) {
    bestsellings[i] = &titles[i];
  }
  for (size_t i = 0; i < NUMS; i++) {
    printf("%s\n", *bestsellings[i]);
  }

  return EXIT_SUCCESS;
}
