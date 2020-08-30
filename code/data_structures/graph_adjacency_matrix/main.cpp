#include <iostream>
#include "AdjacencyMatrix.h"

int main() {
    AdjacencyMatrix M(5);

    M.addEdge(2, 5);
    M.addEdge(1, 5);
    M.addEdge(5, 1);
    M.addEdge(3, 3);

    M.removeEdge(1, 5);

    M.display();

    return 0;
}