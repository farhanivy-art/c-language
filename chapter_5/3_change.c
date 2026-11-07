#include <stdio.h>

// function prototype
/*
int sum(int,int)
//function defination
int sum (int x,int y)
{
    //printf("the sum is %d \n",x+y);
    return x+y;
}

int main(){
    int c = sum(1,2);
    printf("%d \n",c);

    return 0;
}
*/

int change(int a);

int change(int a) {
    a = 77; // Misnomer
    return 0;
}

int main(){
    int b=22;
    change(b); // The value of b remains 22
    printf("b is %d", b); 

    return 0;
}