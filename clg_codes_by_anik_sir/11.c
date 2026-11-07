#include <stdio.h>

int main() {
    int n, s = 1, i = 1;
    
    printf("Enter the number:\n");
    scanf("%d", &n);
    
    while(i <= n) {
        s = s * i;
        i++;
    }
    
    printf("Factorial of %d is %d\n", n, s);
    
    return 0;
}