#include <iostream>

void mult(int *a, int *b, int *res, int size, int rows, int cols){
    for(int k=0;k<rows;k++){
        for(int j=0;j<cols;j++){
            int ret = 0;
            for(int x=0;x<size;x++){
                ret += a[x+k*size] * b [j+x*cols];
            }
            res[j+k*cols] = ret;
        }
    }
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
    int a[3][2] = {
        {1,2},
        {0,1},
        {1,0}
    };

    int b[2][1] = {
        {1},
        {0}
    };

    int res[3][1];

    mult(a[0], b[0], res[0], 2, 3, 1);

    print(res[0], 3, 1);
    return 0;
}