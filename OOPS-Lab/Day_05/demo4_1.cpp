// demo constant data member , condtant member fun and constant obejct
#include<iostream>
using namespace std;
class ConstDemo
{
    private:
        mutable int a;   // non const data member
        int b;
        int const c; //const data member
        const int d; 
    public:
    // ctor init list
        ConstDemo():a(10), b(20),c(30), d(40)
        {
            //this->a=10; // allowed as non const data member of class
            //this->b=20;
            //this->c=30;// not allowed as  const data member of class
            //this->d=40;
        }
        ConstDemo(int a, int b, int c, int d):a(a), b(b),c(c), d(d)
        {
            //this->a=a; // allowed as non const data member of class
            //this->b=b;
            //this->c=c;// not allowed as  const data member of class
            //this->d=d;
        }
            // in non constant member fun of class we can  modify state of object

        //void print(ConstDemo * const this)
        void print()
        {
            //this->a=111;  // alllowed as a & b are non const data members
            //this->b=222;
            //this->c=333;  not alllowed as c & d are const data members
            //this->d=444;
            cout<<"this->a = "<<this->a<<endl;
            cout<<"this->b = "<<this->b<<endl;
            cout<<"this->c = "<<this->c<<endl;
            cout<<"this->d = "<<this->d<<endl;
        }
        //return_type fun_name()const
    // in constant member fun of class we can not modify state of object
        //void display(const ConstDemo * const this)const
        void display()const
        {
            this->a=111;  //  alllowed as data member mutable
            //this->b=222;
            //this->c=333;  not alllowed as c & d are const data members
            //this->d=444;
            cout<<"this->a = "<<this->a<<endl;
            cout<<"this->b = "<<this->b<<endl;
            cout<<"this->c = "<<this->c<<endl;
            cout<<"this->d = "<<this->d<<endl;
        }
        ~ConstDemo()
        {
            this->a=0; // allowed as non const data member of class
            this->b=0;
            //this->c=0;// not allowed as  const data member of class
            //this->d=0;
        }

};// end of ConstDemo class

int main(void)
{
    // non constant object can call both constant member function
    // and non constant member function
    ConstDemo c1;
    cout<<"C1.display"<<endl;
    //non constant object can call  constant member function
    c1.display();
    
    cout<<"C1=print"<<endl;
    //non constant object can call non constant member function
    c1.print();
    cout<<"size of c1="<<sizeof(c1)<<endl; // size of(c1) 16 bytes

//   constant object can call only  constant member function
    // constant object can not call non constant member function
    
    const ConstDemo c2;  // constant obejct
    cout<<"C2.display"<<endl;
    //constant object can call  constant member function
    c2.display();
    
    cout<<"C2=print"<<endl;
    // constant object can not call non constant member function
    //c2.print();  error
    cout<<"size of c2="<<sizeof(c2)<<endl; // size of(c2) 16 bytes



    return 0;
}