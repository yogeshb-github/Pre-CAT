// demo of dtor of Complex class

#include<iostream>
using namespace std;

namespace NComplex
{
    class Complex
    {
        private:
           // data memebers(c/ccp) / fields (java) 
            int real;
            int imag;
        public:
            // member function (cpp) // methods (java)
            //1.1 input
            //void accept_input(Complex * const this)
            void accept_input()
            {
                cout<<"this->real =";
                cin>>this->real;
                cout<<"this->imag =";
                cin>>this->imag;
            }
        
            //1.2 output
            //void display_output(Complex * const this)
            void display_output()
            {
                cout<<"this->real="<< this->real<<" \t["<<&this->real<<"]"<<endl;
                cout<<"this->imag="<< this->imag<<" \t["<<&this->imag<<"]"<<endl;
            }

            // 2.1 parameterless ctor or no argument ctors
            //Complex(Complex *const this)
            Complex()
            {
                this->real=10;
                this->imag=20;
                cout<<"inside paramaterless ctor of complex class"<<endl;
            }
            // 2.2 parameterized ctor with 1 arg
            //Complex(Complex *const this, int value)
            Complex(int value)
            {
                this->real=value;
                this->imag=value;
                cout<<"inside paramaterized ctor  with 1 arg of complex class"<<endl;
            }

            // 2.3 parameterized ctor with 2 arg
            //Complex(Complex *const this, int real, int imag)
            Complex(int real, int imag)
            {
                this->real=real;
                this->imag=imag;
                cout<<"inside paramaterized ctor  with 2 arg of complex class"<<endl;
            }

            // 2.1 parameterless ctor or no argument ctors
            //Complex(Complex *const this)
            ~Complex()
            {
                cout<<"-=----------------------------"<<endl;
                this->display_output();
                this->real=0;
                this->imag=0;
                cout<<"inside dtor of complex class"<<endl;
                cout<<"-=----------------------------"<<endl;
            }
            
            

    };// end of class Complex

} // end of namespace NComplex
using namespace NComplex;

int  main(void)
{
    Complex c1; // parameterless ctor
    cout<<"c1="<<endl;
    c1.display_output(); // real = 10 imag= 20

    Complex c2(111); // parameterzied ctor with 1 arg
    cout<<"c2="<<endl;
    c2.display_output(); // real = 111 imag= 111

    Complex c3(555,666); // parameterzied ctor with 2 arg
    cout<<"c3="<<endl;
    c3.display_output(); // real = 555 imag= 666

     
    return 0;

}
/*
stack
[c3] 
[c2]
[c1]

ctor calling seq   dtor  calling seq
c1                       c3
c2                       c2  
c3                       c1

*/