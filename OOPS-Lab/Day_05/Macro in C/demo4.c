#include<stdio.h>
#define exp(a) a+a * 5 / a*a
int main( void )
{
    int x = exp(3+2) * 5;
    // int x = 3+2 +3+2 * 5 / 3+2*3+2 * 5;
    // int x = 3+2 +3+2 * 5 / 3+2*3+2 * 5;
    //               ======     === =====
    //       = 3+2 +3+  10  /3 + 6 + 10
    //       = 3+2 +3+  10  /3 + 6 + 10
    //                 =======
  //         = 3+2 +3+  3      + 6 + 10
 //          =  5+   6         + 6 + 10
 //    ==  27
    printf("Value of X=%d",x);
    return 0;
} // Value of X=27
/*
    A.Value of X=27 correct answer
    B.Value of X=32
    C.Value of X=20
    D.compile time error
*/

