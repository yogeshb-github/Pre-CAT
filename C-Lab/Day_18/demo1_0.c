/*
write emp info(structure variable) into text file using fprintf fun

printf("format_sp", variable_name);
fprintf(file_pointer,"format_sp", variable_name);
fprintf(stdout,"%d", e1.empno); // int data  to display on screen
fprintf(fp_emp,"%d", e1.empno); // int data  write into empfile
*/
#include<stdio.h>
#pragma pack(1)
struct emp
{
    int empno;
    char name[10];
    float sal;
};
void accept_emp_info(struct emp * e);
int main(void)
{
    FILE *fp_EmpWrite=NULL;
    struct emp e1;
    //fp_EmpWrite= fopen("c:\\sunbeam\\PM31\\C_Prog\\Day_17\\emp.txt","a");  //windows
    fp_EmpWrite= fopen("/home/sunbeam/PM31/C_Prog/Day_17/emp.txt","a"); // linux or max
    if( fp_EmpWrite==NULL)
        printf("\n unable to open file");
    else
    {
        printf("\n Enter emp info ::");
        accept_emp_info(&e1);
        fprintf(fp_EmpWrite,"%d\t%s\t%f\n",e1.empno, e1.name, e1.sal );
        printf("\n record added into file");
        fclose(fp_EmpWrite);

    }
    return 0;
}
void accept_emp_info(struct emp *e)
{
    fprintf(stdout,"\n Enter emp no=");
    fscanf(stdin,"%d", &e->empno);
    fprintf(stdout,"\n Enter emp name=");
    fscanf(stdin,"%s", e->name);
    fprintf(stdout,"\n Enter emp sal=");
    fscanf(stdin,"%f", &e->sal);
    return;      
}


