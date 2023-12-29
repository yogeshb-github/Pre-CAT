#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next; // self ref structure
}node_t;
node_t *head;  // nodt_t *head=NULL;   //struct node* head=NULL;
node_t* create_node(int value);
void add_first(int value);
void display_list();
int main(void)
{
    display_list(); // empty
    add_first(40) ;
    display_list();//  40
    add_first(30);
    display_list(); // 30---> 40
    add_first(20);
    display_list();// 20--->30---> 40
    add_first(10);
    display_list();// 10--->20--->30---> 40
    add_first(5);
    display_list();// 5---> 10--->20--->30---> 40
    return 0;
}
void display_list()
{
    node_t *trav=NULL;
    trav= head;
    if( trav== NULL)
        printf("\n list is empty \n ");
    else 
    {
        while( trav!=NULL)
        {
            printf("%5d-->",trav->data); // print data of trav node
            trav= trav->next; // go to next node
        }
        printf("\n");
    }
    return;
}
void add_first(int value)
{
    node_t *newnode=NULL;
    newnode= create_node(value);
    if( head==NULL) // if list is empty
    {
        head= newnode; //store address of new node into head pointer (1st node)
    }
    else 
    {
        newnode->next= head; // store address of 1st node into next of new node
        head= newnode; //store address of new node into head pointer
    }
    return;
}
node_t* create_node(int value)
{
    node_t *new_node=NULL;  
    new_node=(node_t*) malloc(sizeof(node_t)*1);    // allocate memory
    if( new_node==NULL)
    {
        printf("\n unable to allocate memory");
        exit(0);
    }
    else 
    {
        new_node->data= value; // assign value to data part of node
        new_node->next= NULL; // assign NULL to next part of node
    }
    return new_node;
}