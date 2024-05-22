#include <assert.h>
#include <stdlib.h>

#include "../vec.h"

#define CNT 10

int main(void) {
    Vector vec = vec_initwithcapacity(CNT);
    for (size_t i = 0; i < CNT; i++) {
        size_t* item = malloc(sizeof(size_t));
        *item = i;
        vec_append(vec, item);
    }
    assert(vec_len(vec) == CNT);

    for (size_t pos = 0; pos < vec_len(vec); pos++) {
        Item item;
        item = vec_remove(vec, pos);
        assert(unwarp(size_t, item) == pos);
        vec_insert(vec, pos, item);
        item = vec_get(vec, pos);
        assert(unwarp(size_t, item) == pos);
    }
    assert(vec_len(vec) == CNT);

    while (!vec_isempty(vec)) {
        vec_pop(vec);
    }
    vec_clear(vec);
    assert(vec_len(vec) == 0);
    vec_destroy(vec);

    return EXIT_SUCCESS;
}
