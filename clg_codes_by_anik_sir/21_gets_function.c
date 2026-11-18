#include <stdio.h>
#include <string.h>

void main()
{
    char a[50];
    int n;
    printf("\n enter the string:");
    gets(a);
    n=strlen(a);
    printf("\n the length of the string is =%d",n);
}