// case 1 => function having same name and different number of arguments

#include<stdio.h>
int sum(int n1, int n2) // sum@@int, int
{
    return n1+n2;
}
int sum(int n1, int n2, int n3) // sum@@int, int, int
{
    return n1+n2+n3;
}

int main(void)
{
    int ans=0;
    ans= sum(10,20,30); // sum@@int, int, int
    printf("\n ans=%d", ans);

    ans= sum(10,20); // sum@@int, int
    printf("\n ans=%d", ans);
    

    return 0;
}
// g++ -S demo3_1.cpp --> demo3_1.asm ( windows)   demo3_1.s (linux/ mac)