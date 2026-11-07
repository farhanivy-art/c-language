//to store arrays and display them in reverse order
#include <stdio.h>

int main()
{
    int a[3],i;
    printf("\n enter the array elements:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array elemrents are:");
    for(i=2;i>=0;i--)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}
