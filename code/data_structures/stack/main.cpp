#include <iostream>
#include "Stack.h"

int main() {
    Stack S;

    Node *n1 = new Node(1);
    Node *n2 = new Node(3);
    Node *n3 = new Node(5);
    Node *n4 = new Node(7);
    Node *n5 = new Node(9);
    Node *n6 = new Node(11);

    S.push(n1);
    S.push(n2);
    S.push(n3);
    S.pop();
    S.push(n4);
    S.push(n5);
    S.pop();
    S.push(n6);

    S.print();

    return 0;
}