// dLL with head and tail pointer
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
}node_t;
node_t *head; // node_t *head= NULL;
node_t *tail; // node_t *tail=NULL;
node_t* create_node(int value);
void add_first(int value);
void display_list();
int main(void)
{
    display_list();
    add_first(40);
    display_list();
    add_first(30);
    display_list();
    add_first(20);
    display_list();
    add_first(10);
    display_list();

    return 0;

}

void display_list()
{
    node_t* trav=NULL;
    if( head== NULL)
        printf("\n list is empty \n");
    else
    {
        printf("\n forword display \n");
        trav= head; // store address of 1st node into trav pointer
        while( trav!=NULL)
        {
            printf("%5d-->",trav->data);
            trav= trav->next; // goto next node
        }
        printf("\n");

        printf("\n backword display \n");
        trav= tail; // store address of last node into trav pointer
        while( trav!=NULL)
        {
            printf("%5d-->",trav->data);
            trav= trav->prev;// goto prev node
        }
        printf("\n");
    }
    return;
}
void add_first(int value)
{
    node_t *newnode=NULL;
    newnode= create_node(value);
    if( head == NULL) // check if list is empty
    {
        head = newnode;
        tail = newnode;
    }
    else 
    {
        newnode->next= head;  // store address of 1st node into next pointer of 1st node
        head->prev= newnode;  // store address of new node into prev pointer of 1st node
        head= newnode;
    }
    return;
}
node_t* create_node(int value)
{
    node_t* new_node=NULL;
    new_node=  (node_t*)malloc(sizeof(node_t)*1);
    if( new_node== NULL)
    {
        printf("\n unable to allocate memory");
        exit(0);
    }
    else 
    {
        new_node->prev=NULL;
        new_node->data= value;
        new_node->next=NULL;
    }
    return new_node;
}


