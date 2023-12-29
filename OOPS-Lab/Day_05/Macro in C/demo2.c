#include<stdio.h>
#define SQUARE(x) (x)*(x)
int main( void )
{
    int x = 4, y = 0 ;
    y = 64 / SQUARE(x+x);
    // y = 64 / (x+x)*(x+x);   y=  64 / (4+4) * (4*4) 
    printf("z = %d",y);       // y= 64/16*16 =  4*16 ==64
    return 0;
} // output z = 64
/*
    A. y = 64
    B. y = 36
    C. y = 128
    D. y = 236
*/