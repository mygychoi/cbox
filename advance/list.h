#ifndef LIST_H
#define LIST_H

#include <stdbool.h>
#include <stdlib.h>

#include "node.h"

struct LinkdedList {
  struct Node *head;
  struct Node *tail;
  size_t size;
};

struct LinkdedList llnew(void);
struct LinkdedList *llclear(struct LinkdedList *ll);

struct Node *llappendend(struct LinkdedList *ll, int value);
struct Node *llappendbegin(struct LinkdedList *ll, int value);
struct Node *llappend(struct LinkdedList *ll, struct Node *pos, int value);

struct Node *lldelete(struct LinkdedList *ll, struct Node *pos);

bool llempty(struct LinkdedList *ll);

struct Node *llfind(struct LinkdedList *begin, int value);

void llprint(struct LinkdedList *ll);

#endif
