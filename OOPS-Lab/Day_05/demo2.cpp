// demo address class
#pragma pack(1)
#include<iostream>
using namespace std;
#include<cstring> // #include<string.h>
namespace NCompsition
{
    class Address
    {
        private:
            char addressinfo[30];
            char city[20];
            int picode;
        public:
            Address()
            {
                strcpy (this->addressinfo,"Market Yard");
                strcpy (this->city,"Pune");
                this->picode=411037;
                cout<<"inside parameterless ctor of Address class"<<endl;
            }

            Address(char *addressinfo, char* city, int pincode)
            {
                strcpy (this->addressinfo,addressinfo);
                strcpy (this->city,city);
                this->picode=pincode;
                cout<<"inside parameterized ctor of Address class"<<endl;
            }
            void print()
            {    cout<<"d2 ="<<endl;                       // dd mm  yy

                cout<<"address info ="<<endl;
                cout<<"this->addressinfo="<< this->addressinfo<<endl;
                cout<<"this->city="<< this->city<<endl;
                cout<<"this->pincode="<< this->picode<<endl;
            }

            ~Address()
            {
                strcpy (this->addressinfo,"");
                strcpy (this->city,"");
                this->picode=0;
                cout<<"inside  dtor of Address class"<<endl;
            }


    }; // end of class Address
}// End of namespace NCompsition
using namespace NCompsition;
int main()
{
    Address a1;  // parameterless ctor of address class
    cout<<"a1 ="<<endl;                  
    a1.print(); //                       
    cout<<"size of a1="<<sizeof(a1)<<endl; // 30+ 20+4=54

    
    Address a2("Rajiv Gandhi IT Park","Mulshi", 411055);  // parameterless ctor of address class
    cout<<"a2 ="<<endl;                  
    a2.print(); //                       
    cout<<"size of a2="<<sizeof(a2)<<endl; // 30+ 20+4=54

    

    return 0;
}
