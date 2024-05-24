#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utils.h"

char *cat(char *str1, char *str2) {
  char *new = malloc(strlen(str1) + strlen(str2) + 1);
  assert(new != NULL);
  strcpy(new, str1);
  strcat(new, str2);
  return new;
}

void print_nums(int *array, size_t size) {
  int *curr = array;
  while (curr < array + size) {
    printf("%5d", *curr);
    curr++;
  }
  printf("\n");
}
