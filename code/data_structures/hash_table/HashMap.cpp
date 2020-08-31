#include "HashMap.h"

HashMap::HashMap(){
    table = new HashEntry*[TABLE_SIZE];
    for(int k=0;k<TABLE_SIZE;k++){
        table[k] = NULL;
    }
}

int HashMap::hashFunc(string value){
    int key = 0;
    for(unsigned int i=0; i<value.size(); i++){
        key += value[i];
    }
    return key % TABLE_SIZE;
}

void HashMap::insert(string value){
    int hash = hashFunc(value);
    if(table[hash] == NULL){
        table[hash] = new HashEntry(value);
    }
}

HashEntry* HashMap::search(string value){
    int hash = hashFunc(value);
    if(table[hash] == NULL){
        return NULL;
    }else{
        return table[hash];
    }
}

void HashMap::remove(string value){
    int hash = hashFunc(value);
    if(table[hash] == NULL){
        cout << "No Element found with value " << value << endl;
    }else{
        table[hash] = NULL;
        cout << "Element with value " << value << " deleted" << endl;
    }
}