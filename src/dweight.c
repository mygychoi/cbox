/*
 * Hello world
 * Myeonggyu Choi, 2024. 4. 13.
 */

#include <stdio.h>

int BASE = 166;

int main(void) {
  int height, length, width;
  int volume;
  int weight;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + BASE - 1) / BASE;
  printf("%d %d", volume, weight);

  return 0;
}
