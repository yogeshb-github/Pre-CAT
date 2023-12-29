#include<stdio.h>
#define SQR(x)(x*x)
int main()
{
    int a, b=3;
    a = b*SQR(b+2);
    // a = b*(b+2*b+2); 
    // a = 3*(3+2*3+2);
    // a = 3*(3+6+2);
    // a = 3*(11);
// a=33
    printf("%d\n", a);
    return 0;
} // output ==33
/*
    a.25
    b.11
    c.33
    d.75
*/