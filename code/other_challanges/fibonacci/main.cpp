#include <iostream>
using namespace std;

int main() {
    int last=0, current=0, next=0;
    for(int i=0;i<20;i++){
        next = last + current;
        last = current;
        current = next;
        next = 0;
        cout << last << endl;
        if(current == 0){
            current++;
        }
    }   

    return 0;
}