#include<stdio.h>
int main(void)
{
    const float pi=3.142f;
    //float *ptr=&pi; // error: invalid conversion from ‘const float*’ to ‘float*’
    //in cpp  if we have to store address of pointer of const variable
    // value of pointer must be constant

    const float *ptr=&pi;
    // value of pointer is constant & address of pointer is not constant

                            // 3.142 3.142
    printf("\n *ptr=%.3f pi=%.3f", *ptr, pi); 

     //pi=4.4f;  // error as pi is constant
     /* pi++;
     ++pi;
     --pi;
     pi--;
     pi+=2; */

    // *ptr= 4.4f; // not allowed as value of pointer is  constant

                                // 3.142  3.142
     printf("\n *ptr=%.3f pi=%.3f", *ptr, pi); 

    return 0;
}
// we can not modify value of constant using pointer in cpp prog
