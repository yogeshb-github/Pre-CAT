// structure in cpp
#include<stdio.h>
#pragma pack(1)
struct emp
{
    private:
    // variables(c) or data member (c/cpp) or fields (java)
        int empno;
        char name[10];
        float sal;

    public:
    // member function (cpp)  or method (java)
    void accept_emp_info()
    {   
        printf("\n Enter emp no=");
        scanf("%d", &empno);
        printf("\n Enter emp name=");
        scanf("%s", name);
        printf("\n Enter emp sal=");
        scanf("%f", &sal);
        return;        
    }
    inline void set_sal(float salary)
    {
        sal= salary;
    }
    void display_emp_info()
    {
        
        printf("\n Emp No   Name   sal \n");
        printf("%-10d%-10s%-10.3f\n",empno, name,sal);
        
        return;
    }

};// end of emp structure

int main(void)
{
    emp e1; //struct emp e1;  
    float salary;
    // e1 is variable/ object  of user defined data type struct emp 

    printf("\n Enter emp info= \n");
    e1.accept_emp_info();
    //accept_emp_info(&e1);

    printf("\n  emp info \n  ");
    e1.display_emp_info();
    //display_emp_info(&e1);
    
    //e1.sal=-10000;  // error as sal is private data member

    printf("\n enter new sal :\n");
    scanf("%f", &salary);
    e1.set_sal(salary);
    printf("\n  emp info \n  ");
    e1.display_emp_info();
    //display_emp_info(&e1);
    
    return 0;
}
/*
 structure is user defined data type in c & cpp
 by default all members of structure are public 

 class is user defined data type in cpp
by default all members of class are private

*/