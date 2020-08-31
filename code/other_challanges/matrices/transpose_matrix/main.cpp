#include <iostream>

void transpose(int *src, int *dest, int rows, int cols){
    for(int i=0;i<rows;i++)
        for(int k=0;k<cols;k++)
            dest[i+k*rows] = src[k+i*cols];
}

void print(int *a, int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int k=0;k<cols;k++){
            std::cout << a[i*cols+k] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int a[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };

    int res[4][2];

    transpose(a[0], res[0], 2, 4);

    print(a[0], 2, 4);

    std::cout << std::endl;

    print(res[0], 4, 2);

    return 0;
}