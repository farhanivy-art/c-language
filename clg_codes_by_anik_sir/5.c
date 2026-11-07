#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    
    printf("Enter the three digit no:\n");
    scanf("%d", &a);
    
    b = a / 100;    // Gets the hundreds digit 
    c = a % 100;    // Gets the remaining two digits 
    d = c / 10;     // Gets the tens digit 
    e = c % 10;     // Gets the units digit 
    
    f = (e * 100) + (d * 10) + b; // Rebuilds the number in reverse
    
    printf("Reversed number: %d\n", f);
    
    return 0;
}