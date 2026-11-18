#include <stdio.h>
#include <string.h>

int main() 
{
    char a[50] = "farhan";
    /* char b[50];
    
    strcpy(b, a);
    printf("\n copy string is: %s", b);*/
    
    // strrev reverses the string directly inside 'b'
    strrev(a); 
    printf("\n reverse string is: %s\n", a);

    return 0;
}