#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int num;
  struct Node *right, *down;
} Node;

Node *InsertRight(Node *node, int number) {
  Node *new = (Node *)malloc(sizeof(Node));

  if (new == NULL)
    return node;

  new->num = number;
  new->right = node;
  new->down = NULL;

  return new;
}

Node *InsertLeft(Node *new) {}

int main() {
  Node *matrix = NULL;

  matrix = InsertRight(matrix, 9);
}
