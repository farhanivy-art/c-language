#include <stdio.h>

int main() {
    char a;
    
    printf("Enter a character:\n");
    scanf("%c", &a);
    
    // Check for both uppercase and lowercase vowels
    if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || 
       a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
    
    return 0;
}