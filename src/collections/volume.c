#include <stdio.h>

#include "volume.h"

void volprint(const int *const volume, const size_t height, const size_t width,
              const size_t length) {
    for (size_t h = 0; h < height; h++) {
        printf("{");
        for (size_t w = 0; w < width; w++) {
            for (size_t l = 0; l < length; l++) {
                printf("%d", volume[h * width * length + w * length + l]);
                if (l != length - 1) {
                    printf(", ");
                }
            }
            if (w == width - 1) {
                printf("}");
            }
            printf("\n");
        }
    }
}
