#ifndef STACK_H
#define STACK_H
#include "Node.h"

class Stack{
    public:
        Node *top;

        Stack();

        void push(Node *n);
        void pop();
        void print();
};

#endif //STACK_H