/*
read emp info(structure variable) from binary file using fread fun

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
    int cnt;
    //fp_EmpRead= fopen("c:\\sunbeam\\PM31\\C_Prog\\Day_17\\emp.dat","rb");  //windows
    fp_EmpRead= fopen("/home/sunbeam/PM31/C_Prog/Day_17/emp.dat","rb"); // linux or max
    if( fp_EmpRead==NULL)
        printf("\n unable to open file");
    else
    {
        // read 1st  record from
                                                              //      0 
        cnt=0;                                                //      1
        printf("\n Emp   Name  sal\n");                      //       1 
        while(fread(&e1, sizeof(struct emp), 1, fp_EmpRead)) // while(1)
        {
           display_emp_info(&e1);         
          cnt++;
        }

    // 1st parameter void pointer which stroes data read from file (&e1)
   // 2ed parameter is no bytes we want to read from file (18 bytes)
// 3 ed parameter no of records we want to read from file (1 record e1)
// 4 th parameter is file pointer from which we have to read data fp_EmpRead    

        
        printf("\n %d records read from file", cnt);
        fclose(fp_EmpRead);

    }
    return 0;
}
void display_emp_info(const struct emp * e)
{
    //printf("\n Emp   Name  sal\n");
    //printf("%-10d%-10s%-6.2f", e->empno, e->name, e->sal);
    // or
    fprintf(stdout,"%-10d%-10s%-6.2f\n", e->empno, e->name, e->sal);
    return;      
}
