// case 3 => function having same name and different order of arguments

#include<stdio.h>
float sum(int n1, float n2) // sum@@int,float
{
    return n1+n2;
}
float sum(float n1, int n2) // sum@@float, int
{
    return n1+n2;
}

int main(void)
{
    float ans=0;
    ans= sum(10.2f,10); // sum@@float, int
    printf("\n ans=%.2f", ans);

    ans= sum(10,20.2f); // sum@@int, float
    printf("\n ans=%.2f", ans);
    

    return 0;
}
// g++ -S demo3_3.cpp --> demo3_3.asm ( windows)   demo3_3.s (linux/ mac)