#include "Entity.h"

int main(){
    Entity e1("jonas", 100);
    e1.attack(10);
    e1.attack(-15);
    e1.printData();
    return 0;
}