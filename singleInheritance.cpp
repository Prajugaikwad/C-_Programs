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

int main()
{
     Derived * ptr = NULL;
     
     // A B constructor      
     //B A destructor
     ptr = new Derived; //like malloc auto storage
     
     ptr->fun();
     ptr->gun();

     delete ptr;
     
    return 0;
}
