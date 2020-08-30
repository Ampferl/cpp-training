#include <iostream>
#include "LinkedList.h"

int main() {
  LinkedList L;
  Node *n1 = new Node(5);
  Node *n2 = new Node(8);
  Node *n3 = new Node(12);
  Node *n4 = new Node(17);
  Node *n5 = new Node(23);

  L.addAtEnd(n1);
  L.addAtEnd(n2);
  L.addAtEnd(n3);
  L.addAtEnd(n4);
  L.addAtFront(n5);

  L.printList();

  return 0;
}