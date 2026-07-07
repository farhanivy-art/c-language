#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a + b;
    printf("the value of a is %d and value of b is %d and the sum is %d\n", a, b, c);
    // modulus operator is to get the remainder of a division
    printf("the value of a is %d and value of b is %d and the remainder is: %d\n", a, b, a % b);
    /*
    this do not work on c languges
    int d = a^b;
    */
    return 0;
}