#include <iostream>
#include "Stack.h"

Stack::Stack(){
    top = NULL;
}

void Stack::push(Node *n){
    n->next = top;
    top = n;
}

void Stack::pop(){
    Node *n = top;
    top = top->next;
    delete(n);
}

void Stack::print(){
    Node *ptr = top;
    while(ptr != NULL){
        std::cout << ptr->data << std::endl;
        ptr = ptr->next;
    }
}