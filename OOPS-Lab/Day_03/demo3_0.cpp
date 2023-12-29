#include<iostream>
using namespace std;
int main(void)
{
    int a=10;
    int &r=a; // r is a reference of a
//  int *const r= &a; 

    //int &r1;  error
    //r1=&a;

    cout<<" a = "<< a <<" &a=" << &a<<endl;
    cout<<" r = "<< r <<" &e=" << &r<<endl;

    a=500;
    cout<<" a = "<< a <<" &a=" << &a<<endl;
    cout<<" r = "<< r <<" &e=" << &r<<endl;

    r=1000;
    cout<<" a = "<< a <<" &a=" << &a<<endl;
    cout<<" r = "<< r <<" &e=" << &r<<endl;

    a++;
    cout<<" a = "<< a <<" &a=" << &a<<endl;
    cout<<" r = "<< r <<" &e=" << &r<<endl;

     r++;
     cout<<" a = "<< a <<" &a=" << &a<<endl;
    cout<<" r = "<< r <<" &e=" << &r<<endl;

    
    


    
    return 0;


}

/*
 int no1=10;                            int a=10  
int *ptr= NULL;                         int &r=a;   allowed
    ptr=&no1;                           int &r;    error
or                                          t=&a;  
int ptr=&no1;

printf("\n *ptr=%d", *ptr);             cout<<"r="<<r<<endl;

int no2=20;                              r=&b; error  
ptr=&no2;  // allowed                     

int *ptr=NULL ;// allowed               int &r=NULL; // not allowed
*/