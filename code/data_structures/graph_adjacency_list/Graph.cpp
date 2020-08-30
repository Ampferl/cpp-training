#include <iostream>
#include "Graph.h"


Graph::Graph(int n){
    this->v = n;
    this->vl = new VertexList[n];
    for(int k=0;k<n;k++){
        this->vl[k].head = NULL;
    }
}

void Graph::addEdge(int src, int dest){
    Node *n = new Node(dest);
    n->link = vl[src].head;
    vl[src].head = n;
    n = new Node(src);
    n->link = vl[dest].head;
    vl[dest].head = n;
}

void Graph::print(){
    for(int k=0;k<v;++k){
        Node *temp = vl[k].head;
        std::cout << std::endl << "Adjacency list of vertex" << k << std::endl << "head";
        while(temp){
            std::cout << " -> " << temp->data;
            temp = temp->link;  
        }
        std::cout << std::endl;
    }
}