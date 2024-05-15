#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "node.h"

struct Node *nodenew(int value) {
  struct Node *node;
  node = malloc(sizeof(struct Node));
  assert(node != NULL && "not enough heap memory to add new node");
  node->value = value;
  node->next = NULL;
  return node;
}

struct Node *nodeadd(struct Node *node, int value) {
  struct Node *next = nodenew(value);
  if (node->next != NULL) {
    next->next = node->next;
  }
  node->next = next;
  return next;
}

void nodeprint(struct Node *node) { printf("%5d", node->value); }
