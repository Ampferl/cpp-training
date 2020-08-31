#include "Graph.h"

Graph::Graph(int v){
    this->v = v;
    adj = new list<int>[v];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::dfs(int v){
    bool *visited = new bool[v];
    for(int j=0;j<v;j++){
        visited[j] = false;
    }
    traverse(v, visited);
}

void Graph::traverse(int v, bool visited[]){
    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();++i){
        if(!visited[*i]){
            traverse(*i, visited);
        }
    }
}