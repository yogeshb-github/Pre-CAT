#include<stdio.h>
void f1(int)
{
    printf("inside int block\n");
}
void f1(double)
{
    printf("inside double block\n");
}
int main(void)
{
    f1(10.2F); 
    return 0;
}
