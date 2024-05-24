#ifndef NODE_H
#define NODE_H

struct Node {
  int value;
  struct Node *next;
};

struct Node *nodenew(int value);

struct Node *nodeadd(struct Node *node, int value);

void nodeprint(struct Node *node);

#endif
