#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include <stdlib.h>

#define START 4
#define INCRE 2

typedef int Item;
typedef struct stackimpl *Stack;

Stack init(void);
void destory(Stack stack);

bool is_empty(const Stack stack);

void push(Stack stack, const Item item);
Item pop(Stack stack);
void clear(Stack stack);

#endif
