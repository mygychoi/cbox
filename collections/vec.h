#ifndef VEC_H
#define VEC_H

#include <stdbool.h>
#include <stdlib.h>

typedef void* Item;
typedef struct _Vector* Vector;

#define unwarp(type, item) (*(type*)item)

Vector vec_init(void);
Vector vec_initwithcapacity(const size_t capacity);
Vector vec_initfrom(const Item items[], const size_t size);

void vec_destroy(Vector vec);

void vec_increcap(Vector vec, const size_t capacity);

bool vec_isfull(const Vector vec);
bool vec_isempty(const Vector vec);
size_t vec_len(const Vector vec);

Item vec_get(const Vector vec, const size_t pos);

void vec_append(Vector vec, const Item item);
void vec_insert(Vector vec, const size_t pos, const Item item);
Vector vec_cpy(const Vector vec);

Item vec_pop(Vector vec);
Item vec_remove(Vector vec, const size_t pos);
void vec_clear(Vector vec);

#endif
