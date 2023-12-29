#include<stdio.h>
//            input               output
 //          call by value    call by address/ reference / pointers
void sumproddiv(int n1, int n2, int *ps, int *pp, int *pd);
int main(void)
{
    int no1, no2, sum=0, prod=0, div=0;
    printf("\n Enter No1=");
    scanf("%d", &no1);
    printf("\n Enter No2=");
    scanf("%d", &no2);

    sumproddiv(no1, no2, &sum, &prod, &div);
    printf("\n %d + %d = %d", no1,no2, sum);
    printf("\n %d * %d = %d", no1,no2, prod);    
    printf("\n %d / %d = %d", no1,no2, div);    
    return 0;
}
 //          call by value    call by address/ reference / pointers
void sumproddiv(int n1, int n2, int *ps, int *pp, int *pd)
{
    *ps=   n1 + n2; // *112=  20+10  *112=30
    *pp=   n1 * n2;// *116=  20*10  *116=200
    *pd=   n1 / n2;// *116=  20/10  *116=2

    //ps=   n1 + n2; // invalid
    //pp=   n1 * n2;// 

    return;
} // return multiple values as out parameters using pointer

