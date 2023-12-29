/*
1. input and output facility
2. ctor (init fun)
3. dtor
4. gettor methods -- inspectors 
5. settor methods -- mutators
*/

// demo of input and output facility

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

    };// end of class Complex

} // end of namespace NComplex
using namespace NComplex;
int  main(void)
{
    Complex c1; // NComplex::Complex c1;
    cout<<"c1="<<endl;
    c1.accept_input();

    cout<<"c1="<<endl;
    c1.display_output();
    
    return 0;

}
