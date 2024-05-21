#include <assert.h>
#include <time.h>

#include "stack.h"

struct stackimpl {
  Item *items;
  size_t size;
  size_t capacity;
};

Stack init(void) {
  Stack stack = malloc(sizeof(struct stackimpl));
  assert(stack != NULL);
  Item *items = malloc(sizeof(Item) * START);
  assert(items != NULL);
  stack->items = items;
  stack->size = 0;
  stack->capacity = START;
  return stack;
}

void destory(Stack stack) {
  free(stack->items);
  free(stack);
}

bool is_empty(const Stack stack) { return stack->size == 0; }

static bool is_full(const Stack stack) {
  return stack->size == stack->capacity;
}

static void incr_cap(Stack stack, const size_t capacity) {
  assert(capacity > stack->capacity);
  Item *new = realloc(stack->items, capacity);
  assert(new != NULL);
  stack->items = new;
  stack->capacity = capacity;
}

void push(Stack stack, const Item item) {
  if (is_full(stack)) {
    incr_cap(stack, stack->capacity * INCRE);
  }
  stack->items[stack->size] = item;
  stack->size++;
}

Item pop(Stack stack) {
  assert(!is_empty(stack));
  stack->size--;
  return stack->items[stack->size];
};

void clear(Stack stack) {
  while (!is_empty(stack)) {
    pop(stack);
  }
}
