#include<iostream>
using namespace std;

class Base
{
   public:
     int i;
   protected:
     int j;
   public:
     int k;
   public:
     Base()
      {
        i=10;
        j=20;
        k=30;
      }
      
};
class Derived : public Base
{
void fun()
      {
        cout<<"value of public i :"<<i<<"\n"; //A
        cout<<"value of private j :"<<j<<"\n"; //NA
        cout<<"value of protected k :"<<k<<"\n";//NA
      }
};

int main()
{
    Base bobj;
    cout<<"value of public i :"<<bobj.i<<"\n";
    cout<<"value of private j :"<<bobj.j<<"\n";
    cout<<"value of protected k :"<<bobj.k<<"\n";
    bobj.fun();
    return 0;
}

