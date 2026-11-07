#include <stdio.h>

int main()
{
    int x1,y1,x2,y2;
    x1=10;
    x2=10;
    y1=x2++;
    printf("\n x1 =%d in y1 =%d",x1,y1);
    y2=++x2;
    printf("\n x2 =%d in y2 =%d",x2,y2);
    return 0;
}