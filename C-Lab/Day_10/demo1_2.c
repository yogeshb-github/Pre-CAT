#include<stdio.h>
int n1, n2;  //int n1=0, n2=0;  
void swap(void);  // swap using global variable
int main(void)
{
    printf("\n Enter N1=");
    scanf("%d", &n1);
    printf("\n Enter N2=");
    scanf("%d", &n2);
    printf("\n before swap in main n1=%d [%u]   n2=%d[%u]", n1,&n1, n2, &n2 );
    swap() ;//  function call
    printf("\n before swap in main n1=%d [%u]   n2=%d[%u]", n1,&n1, n2, &n2 );
    return 0;
} // global variable will swap in main function
//output no1=10   no=20  before swap
//       no1=20   no=10  after swap
void swap(void)
{
    int temp=0;
    printf("\n before swap in swap n1=%d [%u]   n2=%d[%u]", n1,&n1, n2, &n2 );
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\n after swap in swap n1=%d [%u]   n2=%d[%u]", n1,&n1, n2, &n2 );
    return;
}









