#include<stdio.h>
#define sq(a)  a*a  // command
inline int square(int a); // request 
int main(void)
{
    int x=5, y=0;
    y=sq(x); // y= x*x ;  y=5*5= 25
    printf("\n x=%d y=%d", x, y);

    y=square(x);
    printf("\n x=%d y=%d", x, y);

    return 0;

}
inline int square(int a)
{
    return a*a;
}
// inline is allowed single file only
// inline is not allowed multiple files

