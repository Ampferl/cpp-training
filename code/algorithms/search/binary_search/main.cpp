#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
    if(r >= l){
        int mid = l + (r-l)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] > x){
            binarySearch(arr, l, mid-1, x);
        }else{
            binarySearch(arr, mid+1, r, x);
        }
    }
    return -1;
}

int main(){
    int arr[] = {3, 4, 23, 42, 53, 77, 100, 122};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 42;
    cout << "Element found at index: " << binarySearch(arr, 0, n-1, x);
    
    return 0;
}