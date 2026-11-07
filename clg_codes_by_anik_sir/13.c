#include <stdio.h>

int main()
{
    int n, c = 0, i;

    printf("Enter a number:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        printf("\n%d is a prime number\n", n);
    }
    else
    {
        printf("\n%d is not a prime number\n", n);
    }

    return 0;
}