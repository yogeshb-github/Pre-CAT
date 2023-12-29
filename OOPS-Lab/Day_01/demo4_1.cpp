#include<stdio.h>
void f1(int)
{
    printf("inside int block\n");
}
void f1(float)
{
    printf("inside float block\n");
}
int main(void)
{

    f1(10.2); //error: call of overloaded ‘f1(double)’ is ambiguous
    return 0;
}


