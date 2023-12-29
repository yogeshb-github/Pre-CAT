#include<stdio.h>
int n1, n2;  //int n1=0, n2=0;  
void swap(int n1, int n2);  // swap using global variable
int main(void)
{
    printf("\n Enter N1=");
    scanf("%d", &n1);
    printf("\n Enter N2=");
    scanf("%d", &n2);
    printf("\n before swap in main n1=%d [%u]   n2=%d[%u]", n1,&n1, n2, &n2 );
    swap(n1, n2) ;//  function call
    printf("\n before swap in main n1=%d [%u]   n2=%d[%u]", n1,&n1, n2, &n2 );
    return 0;
} ////output no1=10   no=20  before swap
//       no1=10   no=20  after swap
// will not swap in main
void swap(int n1, int n2)
{
    int temp=0;
    printf("\n before swap in swap n1=%d [%u]   n2=%d[%u]", n1,&n1, n2, &n2 );
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\n after swap in swap n1=%d [%u]   n2=%d[%u]", n1,&n1, n2, &n2 );
    return;
}

