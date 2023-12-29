#include<stdio.h>
node_t *head ;// not allowed
typedef struct node
{
    int data;
    node_t *next ;   // error: unknown type name ‘node_t’ not allowed
    //struct node *next; // self ref structure
}node_t;
node_t *head ;// allowed
int main(void)
{

    return 0;
}