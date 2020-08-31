#include <iostream>
#include <cstdlib>
using namespace std;

void quickSort(int *arr, int left, int right){
    int l = left;
    int r = right;
    int size = right - left;

    if(size > 1){
        int pivot = arr[rand() % size + l];
        while(l < r){
            while(arr[r] > pivot && r > l){
                r--;
            }
            while(arr[l] < pivot && l <= r){
                l++;
            }
            if(l < r){
                swap(arr[l], arr[r]);
                l++;
            }
        }
        quickSort(arr, left, l);
        quickSort(arr, r, right);
    }
}

void print(int arr[], int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}

int main(){
    int arr[] = {5, 2, 42, 6, 1, 3, 2, 22, 55, 32, 12, 15, 17, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    print(arr, n);
    return 0;
}