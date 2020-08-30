
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList{
    public:
        Node *head;

        LinkedList();

        void addAtFront(Node *n);
        bool isEmpty();
        void addAtEnd(Node *n);
        Node* search(int k);
        Node* deleteNode(int x);
        Node* getLastNode();
        void printList();

};

#endif //LINKEDLIST_H