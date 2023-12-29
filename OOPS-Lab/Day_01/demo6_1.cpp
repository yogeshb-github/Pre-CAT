#include<stdio.h>
int no1=100; // global variable
int main(void)
{
    int no1=10; // local
    printf("\n local  variable no1=%d [%u]", no1, &no1);
    printf("\n global variable ::no1=%d [%u]", ::no1, &::no1);
    // use :: (scope resolution operator) to print global no
    return 0;
}
