#include <iostream>

int main(){
    int a[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int b[3][4] = {
        {12,11,10,9},
        {8,7,6,5},
        {4,3,2,1}
    };
    int res[3][4];

    for(int i=0;i<3;i++){
        for(int k=0;k<4;k++){
            res[i][k] = a[i][k] + b [i][k];
            std::cout << res[i][k] << " ";
        }
            std::cout << std::endl;
    }

    return 0;
}