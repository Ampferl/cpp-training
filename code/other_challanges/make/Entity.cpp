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

string Entity::getName(){
    return this->name;
}

void Entity::printData(){
    cout << "Name: " << Entity::getName() << endl;
    cout << "Life: " << Entity::getLife() << endl;
}