#include <stdio.h>
#include <string.h>

void main()
{
    char a[50],b[50];
    int n;
    printf("\n enter the string:");
    gets(a);
    strcpy(b,a);
    printf("\n copy string is:%s",b);
}