#include <stdio.h>

#include "matrix.h"

void matprint(const int *const matrix, const size_t rows, const size_t cols) {
    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < cols; c++) {
            printf("%d", matrix[r * cols + c]);
            if (c < cols - 1) {
                printf(", ");
            }
        }
        printf("\n");
    }
}
