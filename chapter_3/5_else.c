#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int age = a;
    if (age > 60)
    {
        printf("you can drive and you are a senior citizen\n");
    }
    else if (age > 18)
    {
        printf("you can drive");
    }
    else
    {
        printf("you can not drive");
    }
    return 0;
}