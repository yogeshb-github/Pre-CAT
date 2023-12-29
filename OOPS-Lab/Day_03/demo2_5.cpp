//settor method - murator  modify the state of the object
// 
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

            //3. gettor method inspectors --- dont modify state of obejct
            //int get_real(Complex * const this)
            int get_real()
            {
                return this->real;
            }
            //int get_imag(Complex * const this)
            int get_imag()
            {
                return this->imag;
            }
            //4. settor method mutator ---  modify state of obejct
            //void set_real(Complex * const this, int real)
            void set_real(int real)
            {
                // data member
                 this->real=real;
                          // local variable
                
            }
            //void set_imag(Complex * const this, int imag)
            void set_imag(int imag)
            {
                this->imag= imag;
            }



    };// end of class Complex

} // end of namespace NComplex
using namespace NComplex;
int  main(void)
{
    Complex c1; // NComplex::Complex c1;
    cout<<"c1="<<endl;
    int r, i;

    cout<<"enter value of real=";
    cin>>r;
    cout<<"enter value of imag=";
    cin>>i;

    c1.set_real(r);
    c1.set_imag(i);
    
    //c1.accept_input();

    cout<<"c1="<<endl;
    c1.display_output();

    
    r= c1.get_real();
    i= c1.get_imag();

    cout<<"real of c1 =" << r<<endl;
    cout<<"imag of c1 =" << i<<endl;
    return 0;

}
