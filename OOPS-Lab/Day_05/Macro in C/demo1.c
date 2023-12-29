#include<stdio.h>
#define ADD_FIVE(a) (a) + 5
int main( void )
{
    int x = ADD_FIVE(3) * 3;
    // int x = (3) + 5 * 3;   //  int x= 3 +5*3 = 3+15= 18
    printf("Value of X=%d",x);
    return 0;
} // out put = Value of X=18
/*
A. Value of X=9
B. Value of X=24
C. Value of X=18 correct answer
D. Value of X=12
*/
