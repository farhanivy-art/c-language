// array in matrix format
#include <stdio.h>

int main()
{
    int a[2][2], i, j;

    // Fixed typo: prinf -> printf
    printf("\n enter array elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Array elements are :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            // Added \t for spacing between columns
            printf("%d\t", a[i][j]);
        }
        // Added \n to move to the next row
        printf("\n");
    }
    return 0;
}