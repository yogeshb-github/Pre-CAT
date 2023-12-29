/*
write emp info(structure variable) into binary file using fwrite fun

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
    //fp_EmpWrite= fopen("c:\\sunbeam\\PM31\\C_Prog\\Day_17\\emp.dat","ab");  //windows
    fp_EmpWrite= fopen("/home/sunbeam/PM31/C_Prog/Day_17/emp.dat","ab"); // linux or max
    if( fp_EmpWrite==NULL)
        printf("\n unable to open file");
    else
    {
        printf("\n Enter emp info ::");
        accept_emp_info(&e1);
        fwrite(&e1,sizeof(struct emp), 1, fp_EmpWrite);
// 1st parameter void pointer which stores address of variable whose data
   // we  want to wrire into binary file  &e1
// 2ed parameter is no bytes we want to write into file (18 bytes)
// 3 ed parameter no of records we want to write into file (1 record e1)
// 4 th parameter is file pointer in which file we have to write data fp_EmpWrite

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
/*
modes text file      binary
r                    rb
w                    wb
a                    ab
*/

