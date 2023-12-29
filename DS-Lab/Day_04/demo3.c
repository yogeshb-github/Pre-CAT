#include<stdio.h>
struct node
{
    int data;
    struct node next; //error: field ‘next’ has incomplete type
};
int main(void)
{

    return 0;
}