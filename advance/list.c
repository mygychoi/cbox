#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "list.h"
#include "node.h"

struct LinkdedList llnew(void) {
  struct LinkdedList ll = {NULL, NULL, 0};
  return ll;
}

struct LinkdedList *llclear(struct LinkdedList *ll) {
  struct Node *pre;
  struct Node *curr = ll->head;
  while (curr != NULL) {
    pre = curr;
    curr = curr->next;
    free(pre);
  }
  ll->head = NULL;
  ll->tail = NULL;
  ll->size = 0;
  return ll;
}

struct Node *llappendend(struct LinkdedList *ll, int value) {
  struct Node *node = nodenew(value);
  if (ll->head != NULL) {
    ll->tail->next = node;
  } else {
    ll->head = node;
  }
  ll->tail = node;
  ll->size++;
  return node;
}

struct Node *llappendbegin(struct LinkdedList *ll, int value) {

  struct Node *node = nodenew(value);
  if (ll->tail != NULL) {
    node->next = ll->head;
  } else {
    ll->tail = node;
  }
  ll->head = node;
  ll->size++;
  return node;
}

struct Node *llappend(struct LinkdedList *ll, struct Node *pos, int value) {
  if (pos == ll->head) {
    return llappendbegin(ll, value);
  } else if (pos == ll->tail) {
    return llappendend(ll, value);
  }
  struct Node *new = nodenew(value);
  new->next = pos->next;
  pos->next = new;
  ll->size++;
  return new;
}

struct Node *lldelete(struct LinkdedList *ll, struct Node *pos) {
  struct Node *pre = ll->head;
  while (pre != NULL && pre->next != pos) {
    pre = pre->next;
  }
  if (pre != NULL) {
    pre->next = pos->next;
  }
  free(pos);
  ll->size--;
  if (pre == NULL) {
    ll->head = pos;
  }
  if (pre->next == NULL) {
    ll->tail = NULL;
  }
  return pos->next;
}

bool llempty(struct LinkdedList *ll) { return ll->size == 0; }

struct Node *llfind(struct LinkdedList *ll, int value) {
  struct Node *curr = ll->head;
  while (curr != NULL && curr->value != value) {
    curr = curr->next;
  }
  return curr;
}

void llprint(struct LinkdedList *ll) {
  struct Node *curr = ll->head;
  while (curr != NULL) {
    nodeprint(curr);
    curr = curr->next;
  }
  printf("\n");
}
