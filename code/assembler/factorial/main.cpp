#include <iostream>

extern int factorial(int n);

int main(){
    int n = 5;
    std::cout << "The factorial of " << n << " is " << factorial(n);
    return 0;
}