#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number:\n");
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative\n");
    }

    return 0;
}