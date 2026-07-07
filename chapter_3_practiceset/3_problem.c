#include <stdio.h>

int main()
{
    int income;
    float tax =0;
    printf("enter income:\n");
    scanf("%d", &income);

    if (income <= 250000){
        tax = 0;
    }
    else if (income >250000 && income < 500000){
        tax = 0.05 * (income - 250000);
    }
    else if (income >500000 && income < 1000000){
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    printf("tax = %d\n", tax);
    return 0;
}