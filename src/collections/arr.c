#include <stdio.h>

#include "arr.h"

void arrprint(const int array[], const size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
}
