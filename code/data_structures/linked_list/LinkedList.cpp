#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList(){
    LinkedList::head = NULL;
}

void LinkedList::addAtFront(Node *n){
    n->next = head;
    head = n;
}

bool LinkedList::isEmpty(){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
}

void LinkedList::addAtEnd(Node *n){
    if(head == NULL){
        head = n;
        n->next = NULL;
    }else{
        Node *n2 = getLastNode();
        n2->next = n;
    }
}

Node* LinkedList::search(int k){
    Node *ptr = head;
    while(ptr->next!=NULL && ptr->data != k){
        ptr = ptr->next;
    }
    return ptr;
}

Node* LinkedList::deleteNode(int x){
    Node *n = search(x);
    Node *ptr = head;
    if(ptr == n){
        head = n->next;
        return n;
    }else{
        while(ptr->next!=n){
            ptr = ptr->next;
        }
        ptr->next = n->next;
        return n;
    }
}

Node* LinkedList::getLastNode(){
    Node *ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    return ptr;
}

void LinkedList::printList(){
    Node *ptr = head;
    while(ptr != NULL){
        std::cout << ptr->data << "->";
        ptr = ptr->next;
    }
}