#include<stdio.h>
/*
int f1(int) // f1@@int
{
    printf("inside int(return) block\n");
}*/
void f1(int) // f1@@int
{
    printf("inside int block\n");
}
void f1(float)
{
    printf("inside float block\n");
}
void f1(double)
{
    printf("inside double block\n");
}
void f1(char)
{
    printf("inside char block\n");
}
void f1(char*)
{
    printf("inside  char *( string ) block\n");
}
void f1(void)
{
    printf("inside void block\n");
}
int main(void)
{
    f1(10) ; //inside int block"
    f1(10.2); //inside double block"
    f1(10.2F); //inside float block"
    f1(10.2f); //inside float block"
    f1((int)10.2); //inside int block"
    f1(); //inside void block"
    f1('A'); //inside char block"
    f1("sunbeam"); // inside  char *( string ) block
    f1((double)10); // //inside double block"

    //f1(11,22);  //  error: no matching function for call to ‘f1(int, int)’

    return 0;
}


