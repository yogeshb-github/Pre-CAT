/*
composition 
    Person Name
    person has bithdate
    person has address

*/
// demo  of date class
#include<iostream>
using namespace std;
#pragma pack(1)
#include<cstring> // #include<string.h>

namespace NCompsition
{
    class Date
    {
        private:
            int dd;
            int mm;
            int yy;
        public:
            Date()
            {
                this->dd=1;
                this->mm=12;
                this->yy=2000;
                cout<<"inside parameterless ctor of Date class"<<endl;
            }

            Date(int dd, int mm, int yy)
            {
                this->dd=dd;
                this->mm=mm;
                this->yy=yy;
                cout<<"inside parameterzied ctor of Date class"<<endl;
            }
            void print()
            {
                cout<<"date="<<endl;
                cout<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<"\n";
            }

            ~Date()
            {
                this->dd=0;
                this->mm=0;
                this->yy=0;
                cout<<"inside dtor of Date class"<<endl;
            }           

    }; // end of class Date

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
            {
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

    //person has bithdate
    //person has address

    class Person
    {
        private:
            char name[20];
            Address per_address; // class Address
            Date birth_date ; // class Date
        public:
            Person()
            {
                strcpy(this->name, "abcd");
                cout<<"inside parameterless ctor of Person class"<<endl;
            }
            Person(char *name)
            {
                strcpy(this->name, name);
                cout<<"inside parameterized ctor of Person class"<<endl;
            }
            void print_person_info()
            {
                cout<<" person info =";
                cout<<" this->name ="<<this->name<<endl;
                //composition --->> objectname.methodname()
                this->birth_date.print();
                this->per_address.print();
            }
            ~Person()
            {
                strcpy(this->name, "");
                cout<<"inside dtor of Person class"<<endl;
            }

    };//end of person class

}// End of namespace NCompsition
using namespace NCompsition;
int main()
{
    Person p1;  // parameterless ctor of Person class
    cout<<"p1 ="<<endl;          
    p1.print_person_info(); //   name   birthdate  address
                            //    20      12          54
    cout<<"size of p1="<<sizeof(p1)<<endl; // 86

    
    

    return 0;
}

