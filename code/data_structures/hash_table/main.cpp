#include "HashMap.h"

int main(){
    HashMap H;

    H.insert("One");
    H.insert("Two");
    H.insert("Three");

    cout << H.search("Two") << endl;
    H.remove("Two");
    H.remove("Two");

    return 0;
}