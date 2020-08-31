#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <list>
using namespace std;

class Graph{
    private:
        int v;
        list<int> *adj;
        void traverse(int v, bool visited[]);
    public:
        Graph(int v);
        void addEdge(int v, int w);
        void dfs(int v);
};

#endif//GRAPH_H