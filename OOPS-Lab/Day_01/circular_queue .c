// global circular queue using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int info[MAX]; 
int front;
int rear;
void init_queue(); 
void add_queue(int value); // add element into queue
void delete_queue(); // remove from queue
int peek(); // this will give top most of queue
int is_empty(); // check stack is empty or not
int is_full(); // check stack is full or not   
void print_queue(); // not a function to be explain in interview
int menu_choice();
int main(void)
{
    int choice, data;

    init_queue();
    print_queue();

    do
    {
        choice= menu_choice();
        switch( choice)
        {
            default :  printf("\n in invalid choice\n");
                       break;
            case 1 : // push

                    if( !is_full())  //(!1)  (!0)
                    {
                        printf("\n Enter data = ");
                        scanf("%d", &data);
                        add_queue(data);
                    }
                    else 
                        printf("\n queue is full ( over flow)\n");
                    break;
            case 2 : // pop
                    if( !is_empty())
                    {
                        data= peek();
                        delete_queue();
                        printf("\n remove element from queue=%d\n", data);
                    }
                    else 
                    {
                        printf("\n queue is empty ( under flow)\n");
                    }
                    break;
            case 3 : // peek
                    if( !is_empty())
                    {
                        data= peek();
                        printf("\n peek element from queue=%d\n", data);
                    }
                    else 
                    {
                        printf("\n queue is empty (  under flow)\n");
                    }

                    break;
            case 4 : // print queue
                    print_queue();
                    break;
            case 0 : // exit    
                    exit(0);
        }
        print_queue();
        printf("\n Enter 1 to contibue or 0 to exit ");
        scanf("%d", &choice);

    }while( choice!=0);

    return 0;
}

int menu_choice()
{
    int choice;
    printf("\n 1. Add [add into the queue] ");
    printf("\n 2. Delete  [remove from ths queue] ");
    printf("\n 3. Peek [display topmost from the queue] ");
    printf("\n 4. Print queue  [display contents from ths queue] ");
    printf("\n 0. Exit from queue \n");
    printf("\n Enter choice :: ");
    scanf("%d",&choice);
    return choice;
}
void init_queue()
{
    rear=front=-1; // assign rear and front equal to -1
    int index;
    for(index=0; index<MAX; ++index)
    {
        info[index]=-1;
    }
    return;
}
void print_queue()
{
    int index;
    for( index=0; index<MAX; index++)
    {
        printf(" [ %-5d ]", info[index]); // print data
    }
    printf("\t data ");
    printf("\n=======================================================\n");
    for( index=0; index<MAX; index++)
    {
        printf(" [ %-5d ]", index); // print index
    }
    printf("\t index of array ");
    printf("\n=======================================================\n");
    printf("\n rear=%5d front=%5d", rear, front);
    return;
}
void add_queue(int value) // add element into queue
{
    if( rear== MAX-1)
        rear=0;
    else 
        rear++; //rear=rear+1;  increment rear by 1
    info[rear]=value; // insert value in to queue at rear position
    return;
}
void delete_queue() // remove from queue
{
    if( front==MAX-1)
        front=0;
    else 
        front++ ; //front= front+1; // increment fromnt by 1
    info[front]= -1; // over right the value at front by -1 

    if( front== rear)
    {
        rear= front= -1; // reset both rear and front to -1
    }
    return;
}
int peek() // this will give top most of queue
{
    int value;
    if( front==MAX-1)
        value = info[0];
    else 
        value= info[front+1];
    return value;
}
int is_empty() // check circular queue is empty or not
{
    if( rear==-1 && front== -1)
        return 1;
    else
        return 0;
}
int is_full() // check queue is full or not   
{

 if( (front==-1 && rear== MAX-1) || (rear==front && rear!=-1)) 
        return 1;  // queue is full
    else 
        return 0; // queue is not full
        return 1;
    else 
        return 0;
}

