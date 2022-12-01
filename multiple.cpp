

#include<iostream>
using namespace std;

class Base1
{
   public:
     int A;      //4
    
    Base1()
    {
        cout<<"Base1 Constructor\n";
    }
    ~Base1()
    {
        cout<<"Base1 Destructor\n";
    }
    void fun()
    {
        cout<<"Inside Fun\n";
    }
};
class Base2
{
    public:
     int I,J,K;    //12
     Base2()
    {
        cout<<"Base2 Constructor\n";
    }
    ~Base2()
    {
        cout<<"Base2 destructor\n";
    }
    void gun()
    {
        cout<<"Inside gun\n";
    }
};
//here one class is public but base 2 is declared as private by default
//class Derived : Base2, public Base1

class Derived : public Base2, public Base1
{
    public:
     int X,Y;     //24
     Derived()
    {
        cout<<"Derived Constructor\n";
    }
    ~Derived()
    {
        cout<<"Derived Destructor\n";
    }
    void sun()
    {
        cout<<"Inside sun\n";
    }
};
int main()
{
    Derived dobj;
   // dobj.fun(); 
    dobj.gun();
    dobj.sun();

    return 0;
}