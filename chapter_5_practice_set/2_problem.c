#include <stdio.h>

float c2f(float);
float c2f(float c){
    return ((9.0*c)/5.0) + 32;
}
int main()
{
    float c = 45.0;
    printf("the convertion of celcius to faranite %f is %f\n", c, c2f(c));
    return 0;
}