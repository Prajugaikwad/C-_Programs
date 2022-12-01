#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void fun() 
          {  
             cout<<"Base fun\n";
          }       // 1000
        virtual void gun() 
           {   
            cout<<"Base gun\n"; 
           }      // 2000 
        virtual void sun() 
          {   
           cout<<"Base sun\n"; 
          }      // 3000
        virtual void run()
        {   
           cout<<"Base run\n"; 
        }
};

class Derived : public Base
{
    public:
        int X,Y;
         virtual void gun() 
         {   
            cout<<"Derived gun\n"; 
         }       // 4000
        virtual void run() 
         {   
            cout<<"Derived run\n"; 
         }       // 5000
        virtual void mun() 
         {   
            cout<<"Derived mun\n";  
        }      // 6000
};

int main()
{
    Base *bp = NULL;
    Derived dobj;
    bp = & dobj;        // Upcasting

    bp->fun();      //  Base fun
    bp->gun();      // Derived gun
    bp->sun();      // Base sun
    bp->run();     // Derived run

    // if we call the function using the base pointer
    //but if that fun is not virtual in the base class 
    //then compiler will generate an error
    //bp->mun();

    return 0;
}















































