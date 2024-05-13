#include <stdio.h>
#include <stdlib.h>

typedef struct Connection {
  int ID;
  struct Connection *next;
} Connection;

typedef struct Graph {
  int num;
  Connection *connections;
  struct GR *next;
} GR;

int main() { return 0; }
