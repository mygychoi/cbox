#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

extern int nums[];
extern int top;

void make_empty(void);

bool is_empty(void);
bool is_full(void);

void push(int num);
int pop(void);
#endif
