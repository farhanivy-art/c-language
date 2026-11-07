#include <stdio.h>

int factorial(int);
//factorial(5) = 1x2x3x4x5
//factorial(4) = 1x2x3x4
//factorial(3) = 1x2x3
//factorial(n) = 1x2....n-1xn
// = 1x2x3x4x5...n-1
int factorial(int n)
{
    if(n==1 || n==0){ //base condition
        return 1;
    }
    // Factorial(n)=Factorial(n-1) x n
    return n * factorial(n-1);
}

int main(){
    int a = 6;
    printf("the Factorial of %d is %d", a, factorial(a));
    return 0;
}