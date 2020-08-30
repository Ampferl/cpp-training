#include <iostream>
#include "Queue.h"

int main() {
    Queue Q;

    Node *n1 = new Node(1);
    Node *n2 = new Node(3);
    Node *n3 = new Node(5);
    Node *n4 = new Node(7);
    Node *n5 = new Node(9);
    Node *n6 = new Node(11);

    Q.enqueue(n1);
    Q.enqueue(n2);
    Q.enqueue(n3);
    Q.enqueue(n4);
    Q.enqueue(n5);
    Q.enqueue(n6);

    Q.dequeue();
    Q.dequeue();

    Q.print();
    
    return 0;
}