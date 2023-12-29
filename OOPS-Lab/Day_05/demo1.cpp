// demo  of date class
#include<iostream>
#pragma pack(1)
using namespace std;
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
}// End of namespace NCompsition
using namespace NCompsition;
int main()
{
    Date d1;  // parameterless ctor of date class
    cout<<"d1 ="<<endl;                       // dd mm  yy
    d1.print(); // 1/12/2000                /int int int 
    cout<<"size of d1="<<sizeof(d1)<<endl; // 4+ 4+4=12

    Date d2(12,4,1999);  // parametezied ctor of date class
    cout<<"d2 ="<<endl;                       // dd mm  yy
    d2.print(); // 12/4/1999                /int int int 
    cout<<"size of d2="<<sizeof(d2)<<endl; // 4+ 4+4=12


    

    return 0;
}
