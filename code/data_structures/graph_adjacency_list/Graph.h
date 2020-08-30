#ifndef GRAPH_H
#define GRAPH_H
#include "VertexList.h"

class Graph{
    public:
        int v;
        VertexList *vl;
        
        Graph(int n);
        void addEdge(int src, int dest);
        void print();
};

#endif //GRAPH_H