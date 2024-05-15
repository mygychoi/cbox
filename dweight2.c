/*
 * Hello world
 * Myeonggyu Choi, 2024. 4. 13.
 */

#include <stdio.h>

#define INCHESE_PER_POUND 166

int main(void) {
  int height, length, width;
  int volume;
  int weight;

  printf("height: ");
  scanf("%d", &height);
  printf("length: ");
  scanf("%d", &length);
  printf("width: ");
  scanf("%d", &width);
  volume = height * length * width;
  weight = (volume + INCHESE_PER_POUND - 1) / INCHESE_PER_POUND;
  printf("volume: %d weight:%d\n", volume, weight);

  return 0;
}
