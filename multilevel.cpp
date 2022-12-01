

#include<iostream>
using namespace std;
class Base
{
    public:
      int A, B;

      Base()
      {
        cout<<"Inside Base constructor\n";
      }
      ~Base()
      {
        cout<<"Inside Base destructor\n";
      }
      void fun()
      {
        cout<<"Inside Base Fun\n";
      }
};
class Derived : public Base //16 byte
{
    public :
      int X, Y;
      Derived()
      {
        cout<<"Inside derived constructor\n";
      }
      ~Derived()
      {
        cout<<"Inside Derived destructor\n";
      }
      void gun()
      {
        cout<<"Inside Derived gun\n";
      }
};
class DerivedX : public Derived
{
    public:
    int i,j;
    DerivedX()
    {
        cout<<"Inside DerivedX constructor\n";
    }
    ~DerivedX()
    {
        cout<<"Inside DerivedX Destructor\n";
    }
    void sun()
    {
       cout<<"Inside DerivedX sun\n";  
    }


};
int main()
{
     
     cout<<"size of Base : "<<sizeof(Base)<<"\n";  //8
     cout<<"size of Derived : "<<sizeof(Derived)<<"\n"; //16
     cout<<"size of DerivedX : "<<sizeof(DerivedX)<<"\n";//24
     
     DerivedX dobj;
     dobj.fun();
     dobj.gun();
     dobj.sun();
    return 0;
    
}
