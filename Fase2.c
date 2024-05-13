#include <stdio.h>
#include <stdlib.h>

typedef struct Connection {
  int ID;
  struct Connection *next;
} Connection;

typedef struct Graph {
  int num;
  Connection *connections;
  struct Graph *next;
} GR;

GR *InsertNode(GR *matrix, int number) {
  GR *new = (GR *)malloc(sizeof(GR));

  if (new == NULL) {
    perror("error allocating memory");
    return matrix;
  }

  new->next = matrix;
  new->num = number;
  new->connections = NULL;

  return new;
}

/*void InsertConnection(GR *matrix, int ID, int link) {
  Connection *new = (Connection *)malloc(sizeof(Connection));
  if (new == NULL) {
    perror("error allocating memory");
    return;
  }
}*/

int main() {
  GR *matrix = NULL;

  return 0;
}
