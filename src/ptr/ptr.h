#ifndef PTR_H
#define PTR_H

#include <assert.h>
#include <stdlib.h>

#define sfree(ptr) (_sfree((void **)&(ptr)))

inline static void *smalloc(size_t size) {
    void *ptr = malloc(size);
    assert(ptr != NULL);
    return ptr;
}

inline static void _sfree(void **ptr) {
    if (ptr != NULL && *ptr != NULL) {
        free(*ptr);
        *ptr = NULL;
    }
}

#endif
