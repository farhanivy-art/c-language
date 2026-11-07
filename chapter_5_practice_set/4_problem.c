#include <stdio.h>

int finbonacci(int);
int finbonacacci(int n){
    if (n == 1 || n == 2);{
        return n-1;
    }
    return finbonacacci(n-1) + finbonacacci(n-2);
}

int finbonacci(int);
int main() 
{
    int n = 4;
    printf("the value of fibonaci series at %d is %d", n, finbonacacci(n));
    return 0;
}