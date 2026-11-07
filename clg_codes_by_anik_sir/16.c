//to store arrays and display them
#include <stdio.h>

int main()
{
    int a[3], i;
    
    // Fixed typo: printg -> printf
    printf("\n enter the array elements:\n");
    
    // First loop: Read all elements
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("\n array elements are :");
    
    // Second loop: Print all elements
    for (i = 0; i < 3; i++)
    {
        printf("\n %d", a[i]);
    }
    
    return 0;
}