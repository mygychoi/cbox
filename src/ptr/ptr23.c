#include <stdio.h>
#include <stdlib.h>

#include "../collections/matrix.h"
// #include "../collections/volume.h"

#define ROWS (3)
#define COLS (3)
#define HEIGHT (4)

int main(void) {
    int **matrix1 = malloc(sizeof(int *) * ROWS);
    matrix1[0] = malloc(sizeof(int) * ROWS * COLS);
    for (size_t i = 1; i < ROWS; i++) {
        matrix1[i] = matrix1[0] + i * COLS;
    }
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS; j++)
            matrix1[i][j] = i + j;
    }
    matprint(&matrix1[0][0], ROWS, COLS);

    int *matrix2 = malloc(sizeof(int) * ROWS * COLS);
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS; j++)
            matrix2[i * COLS + j] = i + j;
    }

    matprint(matrix2, ROWS, COLS);

    int *jagged[ROWS];
    for (size_t i = 0; i < ROWS; i++) {
        jagged[i] = malloc(sizeof(int) * (i + 1));
    }

    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < i + 1; j++) {
            jagged[i][j] = i + j;
        }
    }

    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < i + 1; j++) {
            printf("%3d", jagged[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
