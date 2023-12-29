#include<stdio.h>
int no1=100; // global variable
int main(void)
{
    int no1=10; // local
    printf("\n local no1=%d [%u]", no1, &no1);
    return 0;
}
