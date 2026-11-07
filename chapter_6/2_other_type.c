#include <stdio.h>
// to get the address of the stored value
int main()
{
    char i = 'A';
    char j = &i; // j is the pointer address

    float k = 5.232;
    float* k1 = &k;
    printf("the address if i is %p\n", &i);
    printf("the address if i is %p\n", j);
    printf("the address of i is %p\n", &k);


    printf("the vlaue at address j is %d\n", *(&i));

    return 0;
} 