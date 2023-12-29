/*
read emp info(structure variable) from text file using fscanf fun

sacnf("format_sp", &variable_name);
fscanf(file_pointer,"format_sp", &variable_name);
fscanf(stdin,"%d", e1.empno); // int data  to read from screen
fscaf(fp_emp,"%d", e1.empno); // int data  read from empfile
*/
#include<stdio.h>
#pragma pack(1)
struct emp
{
    int empno;
    char name[10];
    float sal;
};
void display_emp_info(const struct emp * e);
int main(void)
{
    FILE *fp_EmpRead=NULL;
    struct emp e1;
    //fp_EmpRead= fopen("c:\\sunbeam\\PM31\\C_Prog\\Day_17\\emp.txt","r");  //windows
    fp_EmpRead= fopen("/home/sunbeam/PM31/C_Prog/Day_17/emp.txt","r"); // linux or max
    if( fp_EmpRead==NULL)
        printf("\n unable to open file");
    else
    {
        // print only 1st record
        fprintf(stdout,"\n Emp   Name  sal\n");
        fscanf(fp_EmpRead,"%d\t%s\t%f\n",&e1.empno, e1.name, &e1.sal );
        printf("\n record read from file");
        display_emp_info(&e1);
        fclose(fp_EmpRead);

    }
    return 0;
}
void display_emp_info(const struct emp * e)
{
    //printf("\n Emp   Name  sal\n");
    //printf("%-10d%-10s%-6.2f", e->empno, e->name, e->sal);
    // or
    fprintf(stdout,"%-10d%-10s%-6.2f", e->empno, e->name, e->sal);
    return;      
}


