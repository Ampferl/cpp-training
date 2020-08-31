#include <iostream>
using namespace std;

int linearSearch(int *arr, int x){
    int n = sizeof(arr)/sizeof(arr[0]) + 1;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5, 2, 42, 6, 1, 3, 2};
    cout << "Found at index: " << linearSearch(arr, 42);
    return 0;
}