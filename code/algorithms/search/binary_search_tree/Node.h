#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int data);
};

#endif //NODE_H