#include <stdio.h>
// to get the address of the stored value
int main()
{
    int i = 72;
    int* j = &i; // j is the pointer address
    printf("the address if i is %p\n", &i);
    printf("the address if i is %p\n", j);


    printf("the vlaue at address j is %d\n", *j);

    return 0;
} 