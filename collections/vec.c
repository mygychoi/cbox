#include <assert.h>

#include "vec.h"

inline static void* ensure_malloc(size_t size);

struct _Vector {
    Item* items;
    size_t size;
    size_t capacity;
};

Vector vec_init(void) { return vec_initwithcapacity(0); }

Vector vec_initwithcapacity(const size_t capacity) {
    assert(capacity > 0);
    Item* items = ensure_malloc(capacity * sizeof(Item));
    Vector new = ensure_malloc(sizeof(struct _Vector));
    new->items = items;
    new->size = 0;
    new->capacity = capacity;
    return new;
}

Vector vec_initfrom(const Item items[], const size_t size) {
    assert(size > 0);
    Vector new = vec_initwithcapacity(size);
    for (size_t i = 0; i < size; i++) {
        new->items[i] = items[i];
    }
    new->size = size;
    return new;
}

void vec_destroy(Vector vec) {
    free(vec->items);
    free(vec);
}

void vec_increcap(Vector vec, const size_t capacity) {
    assert(capacity > vec->capacity);
    Item* new_items = ensure_malloc(capacity * sizeof(struct _Vector));
    for (size_t i = 0; i < vec->size; i++) {
        new_items[i] = vec->items[i];
    }
    vec->items = new_items;
    vec->capacity = capacity;
}

bool vec_isfull(const Vector vec) { return !vec_isempty(vec) && vec->size == vec->capacity; }

bool vec_isempty(const Vector vec) { return vec->size == 0; }

size_t vec_len(const Vector vec) { return vec->size; }

Item vec_get(const Vector vec, const size_t pos) {
    assert(pos < vec->size);
    return vec->items[pos];
}

void vec_append(Vector vec, const Item item) {
    assert(!vec_isfull(vec));
    vec->items[vec->size++] = item;
}

void vec_insert(Vector vec, const size_t pos, const Item item) {
    assert(!vec_isfull(vec));
    assert(pos <= vec->size);
    for (size_t i = vec->size; i > pos; i--) {
        vec->items[i] = vec->items[i - 1];
    }
    vec->items[pos] = item;
    vec->size++;
}

Vector vec_cpy(const Vector vec) { return vec_initfrom(vec->items, vec->size); }

Item vec_pop(Vector vec) {
    assert(!vec_isempty(vec));
    return vec->items[--vec->size];
}

Item vec_remove(Vector vec, const size_t pos) {
    assert(!vec_isempty(vec));
    assert(pos < vec->size);
    Item item = vec->items[pos];
    for (size_t i = pos; i < vec->size - 1; i++) {
        vec->items[i] = vec->items[i + 1];
    }
    vec->size--;
    return item;
}

void vec_clear(Vector vec) { vec->size = 0; }

inline static void* ensure_malloc(size_t size) {
    void* addr = malloc(size);
    assert(addr != NULL);
    return addr;
}
