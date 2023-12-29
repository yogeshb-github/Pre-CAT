#include<iostream>
using namespace std;
int main(void)
{
    int a=10;
    const int &r=a; // r is a reference of a
//  const int *const r= &a; 

    cout<<" a = "<< a <<" &a=" << &a<<endl;  // a=10
    cout<<" r = "<< r <<" &e=" << &r<<endl;  // r=10

    a=100;
    cout<<" a = "<< a <<" &a=" << &a<<endl;  // a=100
    cout<<" r = "<< r <<" &e=" << &r<<endl;  // r=100
  
    //r=1000; // error as value of ref is constant



    return 0;
}