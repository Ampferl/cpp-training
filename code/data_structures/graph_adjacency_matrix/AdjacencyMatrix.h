#ifndef ADJACENCYMATRIX_H
#define ADJACENCYMATRIX_H

class AdjacencyMatrix{
    private:
        int n;
        int **adj;

    public:
        AdjacencyMatrix(int n);
        
        void addEdge(int orig, int dest);
        void removeEdge(int orig, int dest);
        void display();
};

#endif //ADJACENCYMATRIX_H