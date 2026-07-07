#include <stdio.h>

int main()
{
    for (int i = 0; i <= 15; i++)
    {
        if (i == 3)
        {
            continue; //skip this iteration and move to the next iteration
        }
        else if (i == 7)
        {
            break; //exit the loop now!
        }
        printf("the value of i is %d \n", i);
    }
    printf("the loop has been done \n");
    return 0;
}