#include <stdio.h>

int main()
{
    //8!=1x2x3x4x5x6x7x8
    //5!=1x2x3x4x5
    int product = 1;
    int n = 4;
    for (int i = 1; i<=n;i++)
    {
        product *= i;
    }
    printf("the factorial of %d is %d", n, product);
    return 0;
}