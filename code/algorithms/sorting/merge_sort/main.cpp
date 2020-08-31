#include <iostream>
using namespace std;

void merge(int *a, int from, int to, int mid){
    int i = from;
    int j = mid + 1;
    int k = 0;

    int temp[to-from+1];

    while(i<=mid && j<=to){
        if(a[i] < a[j]){
            temp[k] = a[i];
            i++;
        }else{
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while(i<=mid){
        temp[k]=a[i];
        k++;
        i++;
    }

    while(j<=to){
        temp[k]=a[j];
        k++;
        j++;
    }
    for(i=from;i<=to;i++){
        a[i]=temp[i-from];
    }
}

void mergeSort(int *a, int from, int to){
    int mid;
    if(from < to){
        mid=(from+to)/2;

        mergeSort(a, from, mid);
        mergeSort(a, mid+1, to);
        merge(a, from, to, mid);
    }
}

void print(int arr[], int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}

int main(){
    int arr[] = {5, 2, 42, 6, 1, 3, 2, 22, 55, 32, 12, 15, 17, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    print(arr, n);
    return 0;
}