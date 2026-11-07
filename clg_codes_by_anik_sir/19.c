#include <stdio.h>

int main()
{
    // You only need i and j to loop through rows and columns
    int a[2][2], b[2][2], c[2][2], i, j;
    
    printf("enter the elements of a:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("enter the elements of b:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Adding the matrices using the exact same positions
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
           c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("\n sum of the array is:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            // Added \t for spacing
            printf("%d\t", c[i][j]);
        }
        // Added \n to print as a matrix grid
        printf("\n");
    }
    
    return 0;
}