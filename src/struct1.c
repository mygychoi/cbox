#include <stdlib.h>

typedef struct _vector {
    int x;
    int y;
    int z;
} Vector3D;

int main(void) {

    Vector3D v = {1, 2, 3};
    Vector3D *p = &v;
    p->x=3;
    p->y=2;
    p->z=1;

    return EXIT_SUCCESS;
}
