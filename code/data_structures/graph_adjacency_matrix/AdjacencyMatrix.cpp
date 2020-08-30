#include <iostream>
#include "AdjacencyMatrix.h"

AdjacencyMatrix::AdjacencyMatrix(int n){
    this->n = n;
    adj = new int*[n];
    for(int k=0;k<n;k++){
        adj[k] = new int[n];
        for(int j=0;j<n;j++){
            adj[k][j] = 0;
        }
    }
}
        
void AdjacencyMatrix::addEdge(int orig, int dest){
    if(orig > n || dest > n || orig < 1 || dest < 1){
        std::cout << "Trying to add an invalid edge";
        std::cout << "(" << orig << ", " << dest << ")\n";
    }else{
        adj[orig - 1][dest - 1] = 1;
    }
}

void AdjacencyMatrix::removeEdge(int orig, int dest){
    if(orig > n || dest > n || orig < 1 || dest < 1){
        std::cout << "Trying to remove an invalid edge";
        std::cout << "(" << orig << ", " << dest << ")\n";
    }else{
        adj[orig - 1][dest - 1] = 0;
    }
}

void AdjacencyMatrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout << adj[i][j] << " ";
        }
        std::cout << std::endl;
    }
}