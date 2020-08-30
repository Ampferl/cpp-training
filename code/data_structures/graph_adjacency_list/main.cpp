#include <iostream>
#include "Graph.h"

int main() {
    Graph G(5);

    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(2, 3);
    G.addEdge(1, 3);
    G.addEdge(1, 4);
    G.addEdge(3, 4);

    G.print();
  return 0;
}