

#include<iostream>
using namespace std;
class Base
{
   private:
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
  public:
   void fun()
      {
        // here value of private i is not accessible because it is private
        //cout<<"value of public i :"<<i<<"\n"; //A
        cout<<"value of public k :"<<k<<"\n"; //NA
        cout<<"value of protected j:"<<j<<"\n";//NA
      }
};
int main()
{
    Derived bobj;
    bobj.fun();
    return 0;
}