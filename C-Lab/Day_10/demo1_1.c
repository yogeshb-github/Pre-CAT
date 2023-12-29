#include<stdio.h>
void swap(int *n1, int *n2);  // swap using call by address or call by reference or using pointers
int main(void)
{
    int no1, no2;
    printf("\n Enter No1=");
    scanf("%d", &no1);
    printf("\n Enter No2=");
    scanf("%d", &no2);
    printf("\n before swap in main no1=%d [%u]   no2=%d[%u]", no1,&no1, no2, &no2 );
    swap(&no1, &no2) ;//  function call using address
    // no1, no2 actual arguments
    printf("\n after swap in main no1=%d [%u]   no2=%d[%u]", no1,&no1, no2, &no2 );
    return 0;
} // call by address will swap values  in function swap as well as main  fun
// n1, n2 formal arguments are pointers
void swap(int *n1, int *n2)
{
    int temp=0;
    printf("\n before swap in swap *n1=%d [%u]   *n2=%d[%u]", *n1,n1, *n2, n2 );
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("\n after swap in swap *n1=%d [%u]   *n2=%d[%u]", *n1,n1, *n2, n2 );
    return;
}









