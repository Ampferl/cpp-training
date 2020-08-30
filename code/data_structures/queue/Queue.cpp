#include <iostream>
#include "Queue.h"

Queue::Queue(){
    front = NULL;
    back = NULL;
}

void Queue::enqueue(Node *n){
    if(back == NULL){
        front = back = n;
    }else{
        back->next = n;
        back = n;
    }
}

void Queue::dequeue(){
    if(front == NULL){
        return;
    }else{
        Node *n = front;
        front = front->next;
        if(front==NULL){
            back = NULL;
        }
        delete n;
    }
}

void Queue::print(){
    Node *ptr = front;
    while(ptr != NULL){
        std::cout << ptr->data << "->";
        ptr = ptr->next;
    }
}
