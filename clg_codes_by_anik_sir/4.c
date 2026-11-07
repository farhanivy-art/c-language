#include <stdio.h>

int main() {
   int a, b, c;
   
   printf("Enter the value of a: \n");
   scanf("%d", &a);
   
   printf("Enter the value of b: \n");
   scanf("%d", &b);
   
   // Swapping logic
   c = a;
   a = b;
   b = c;
   
   // Print the newly swapped variables 'a' and 'b'
   printf("\n A = %d \n B = %d\n", a, b);
   
   return 0;
}