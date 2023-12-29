/*
NULL in   c (void*)0
NULL in cpp   0
*/
#include<iostream>
using namespace std;
int main(void)
{
    int a=10;
    int &r=a;  // we can create ref to obejct (variable)

    //int &r1=200;  // we can not create ref to constants
    //int &r2=0; 
    //int &r3=NULL;  // error

    return 0;
}