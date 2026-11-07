#include <stdio.h>

int main() {
    float c, f;
    printf("Enter the value in Fahrenheit: ");
    scanf("%f", &f);
    c = ((f - 32.0) / 9.0) * 5.0;
    printf("The value in Celsius is %f\n", c);
    return 0;
}