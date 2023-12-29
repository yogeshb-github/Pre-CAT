#include<stdio.h>
int main(void)
{
    const float pi=3.142f;
    float *ptr=&pi;
                            // 3.142 3.142
    printf("\n *ptr=%.3f pi=%.3f", *ptr, pi); 

     //pi=4.4f;  // error as pi is constant
     /* pi++;
     ++pi;
     --pi;
     pi--;
     pi+=2; */

     *ptr= 4.4f; // allowed as value of pointer is not constant

                                //   4.4   4.4 
     printf("\n *ptr=%.3f pi=%.3f", *ptr, pi); 

    return 0;
}
// we can modify value of constant using pointer in c prog
