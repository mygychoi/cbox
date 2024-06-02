#include <stdio.h>
#include <stdlib.h>

#include "../collections/arr.h"

#define ROWS (4)
#define COLS (5)

int main(void) {

    int matrix[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
    };

    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < ROWS; j++) {
            printf("%p->%-3d", (void *)&matrix[i][j], matrix[i][j]);
        }
        printf("\n");
    }

    arrprint(matrix[0], 5);
    printf("\n");
    arrprint(matrix[1], 5);
    printf("\n");
    arrprint(matrix[2], 5);
    printf("\n");
    arrprint(matrix[3], 5);
    printf("\n");

    printf("%d %d\n", matrix[2][3], *(*(matrix + 2) + 3));
    printf("%d\n", **(matrix + 1));
    printf("%d\n", **(matrix + 2));

    return EXIT_SUCCESS;
}
