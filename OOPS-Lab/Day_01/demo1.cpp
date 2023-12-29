// structure in c
#include<stdio.h>
#pragma pack(1)
struct emp
{
    // variables(c) or data member (c/cpp) or fields (java)
    int empno;
    char name[10];
    float sal;
};
void accept_emp_info(struct emp *e);
void display_emp_info(const struct emp *e);
int main(void)
{
    struct emp e1;

    printf("\n Enter emp info= \n");
    accept_emp_info(&e1);

    printf("\n  emp info \n  ");
    display_emp_info(&e1);
    
    e1.sal=-10000;  // we can change value of data member in main

    printf("\n  emp info \n  ");
    display_emp_info(&e1);
    
    return 0;
}
void accept_emp_info(struct emp *e)
{
    printf("\n Enter emp no=");
    scanf("%d", &e->empno);
    printf("\n Enter emp name=");
    scanf("%s", e->name);
    printf("\n Enter emp sal=");
    scanf("%f", &e->sal);
    return;        
}
void display_emp_info(const struct emp *e)
{
    //e->sal=-10000; error  as e is const
    printf("\n Emp No   Name   sal \n");
    printf("%-10d%-10s%-10.3f\n",e->empno, e->name, e->sal);
    printf("%-10d%-10s%-10.3f",(*e).empno, (*e).name, (*e).sal);
    return;
}



/*
c prog ---> 1972  -- 1988/89
gcc demo1.c ---> a.exe or a.out
to run ---->       ./a.out 
                   .\a.exe

cpp --->    1979    1983    c with classes
g++ demo1.cpp ---> a.exe or a.out
to run ---->       ./a.out 
                   .\a.exe
 

*/