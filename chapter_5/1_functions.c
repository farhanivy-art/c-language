#include <stdio.h>

// function prototype

int sum(int,int);
//function defination
int sum (int x,int y)
{
    printf("the sum is %d \n",x+y);
    return x+y;
}


int main(){
    int a = 1;
    int b = 2;

    sum (a,b);

    sum(5,6);

    //int c = a + b;
    //printf("the sum is %d \n",c);

    //int a1 = 12;
    //int b1 = 23;

    //int c1=a1+b1;
    //printf("the sum is %d \n",c1);

    
    return 0;
}