// demo of default ctor of Complex class


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
Complex c2;
int  main(void)
{
    Complex c1; // local 
    cout<<"c1="<<endl;
    c1.display_output(); // real = garbage imag= garbage
    

    cout<<"c2="<<endl;
    c2.display_output(); // real=0  imag=0


    static Complex c3;
    cout<<"c3="<<endl;  
    c3.display_output();  // real=0  imag=0
    
    
    return 0;

}
