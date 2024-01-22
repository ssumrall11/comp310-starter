#include <stdio.h>

int main(void){
    int num = 5; 
    printf("Factorial of %d is: %d\n", num, factorial(num));
}

int factorial (int n){
    if(n == 0){
        return 1; 
    }
    return n * factorial(n - 1);
}