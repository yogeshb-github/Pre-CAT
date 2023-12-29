// case 2 => function having same name and different types of arguments

#include<stdio.h>
int sum(int n1, int n2) // sum@@int, int
{
    return n1+n2;
}
float sum(float n1, float n2) // sum@@float, float
{
    return n1+n2;
}

int main(void)
{
    int ans=0;
    ans= sum(10,20); // sum@@int, int
    printf("\n ans=%d", ans);

    float ans1= sum(10.1f,20.2f); // sum@@float, float
    printf("\n ans=%f", ans1);
    

    return 0;
}
// g++ -S demo3_2.cpp --> demo3_2.asm ( windows)   demo3_2.s (linux/ mac)