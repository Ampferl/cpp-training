#include "Entity.h"

Entity::Entity(string n, int l){
    this->name = n;
    this->life = l;
}

void Entity::attack(int l){
    this->life -= l;
}

int Entity::getLife(){
    return this->life;
}

void Entity::printData(){
    cout << "Name: " << this->name << endl;
    cout << "Life: " << this->life << endl;
}