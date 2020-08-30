#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"

class Queue{

    public:
        Node *front;
        Node *back;

        Queue();

        void enqueue(Node *n);
        void dequeue();
        void print();

};

#endif //QUEUE_H