#include <stdio.h>
#include <stdlib.h>

#include "../collections/matrix.h"
#include "../collections/volume.h"

#define ROWS (2)
#define COLS (3)
#define HEIGHT (4)

void matrixprint1(int matrix[][COLS], size_t rows) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < COLS; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrixprint2(int (*matrix)[COLS], size_t rows) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < COLS; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrixprint3(int *matrix, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            printf("%d", matrix[cols * i + j]);
        }
        printf("\n");
    }
}

int main(void) {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    matrixprint1(matrix, ROWS);
    matrixprint2(matrix, ROWS);
    matrixprint3(&matrix[0][0], ROWS, COLS);
    matprint(&matrix[0][0], ROWS, COLS);

    int volume[HEIGHT][ROWS][COLS] = {{
                                          {1, 1, 1},
                                          {1, 1, 1},
                                      },
                                      {
                                          {2, 2, 2},
                                          {2, 2, 2},
                                      },
                                      {
                                          {3, 3, 3},
                                          {3, 3, 3},
                                      },
                                      {
                                          {4, 4, 4},
                                          {4, 4, 4},
                                      }};

    volprint(&volume[0][0][0], HEIGHT, ROWS, COLS);

    return EXIT_SUCCESS;
}
