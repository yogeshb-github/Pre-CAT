
#include<stdio.h>
//            input               output
 //          call by value    call by address/ reference / pointers
void sumprod(int n1, int n2, int *ps, int *pp);
int main(void)
{
    int no1, no2, sum=0, prod=0;
    printf("\n Enter No1=");
    scanf("%d", &no1);
    printf("\n Enter No2=");
    scanf("%d", &no2);

    sumprod(no1, no2, &sum, &prod);
    printf("\n %d + %d = %d", no1,no2, sum);
    printf("\n %d * %d = %d", no1,no2, prod);    
    return 0;
}
 //          call by value    call by address/ reference / pointers
void sumprod(int n1, int n2, int *ps, int *pp)
{
    *ps=   n1 + n2; // *112=  10+20  *112=30
    *pp=   n1 * n2;// *116=  10*20  *116=200

    //ps=   n1 + n2; // invalid
    //pp=   n1 * n2;// 

    return;
} // return multiple values as out parameters using pointer

