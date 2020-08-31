#ifndef HASHMAP_H
#define HASHMAP_H
#include "HashEntry.h"

const int TABLE_SIZE = 127;

class HashMap{

    private:
    HashEntry **table;

    public:
    HashMap();
    int hashFunc(string value);
    void insert(string value);
    HashEntry* search(string value);
    void remove(string value);

};

#endif//HASHMAP_H