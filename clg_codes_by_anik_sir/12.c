#include <stdio.h>

int main()
{
    int i =1,s=0;
    do
    {
        s=s+i;
        i=i+2;
    }
    while(i<=10);
    printf("\n sum = %d",s); 
    return 0;
}