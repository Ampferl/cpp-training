#include "Graph.h"

int main(){
    Graph G(7);
    G.addEdge(0,1);
    G.addEdge(0,2);
    G.addEdge(0,3);
    G.addEdge(1,4);
    G.addEdge(1,5);
    G.addEdge(2,6);
    G.addEdge(5,3);

    G.dfs(0);
    
    return 0;
}