#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
using namespace std;

class Entity{
    private:
        string name;
        int life;
    public:
        Entity(string n, int l);
        void attack(int l);
        int getLife();
        void printData();
};

#endif//ENTITY_H