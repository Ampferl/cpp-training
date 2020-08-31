#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    int min;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void print(int arr[], int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}

int main(){
    int arr[] = {5, 2, 42, 6, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    print(arr, n);
    return 0;
}