#include<iostream>
using namespace std;

class Demo
{
    public:
       int i,j;
       const int j;   // constant characteristics
      //Parameterised constructor with Default Values
       Demo(int x = 10, int y = 20)
       {
        i = x;
        j = y;
       }
       void fun()
       {
        int a = 10;
        const int b = 20;
        i++;
        j++;
       }

       // 
       void gun() const
       {
        int a = 10;
        const int b = 20;
        i++;
        j++;
       }
};

int main()
{
    //Demo obj1;         // 10   20
    //Demo obj2(11);     // 11   20
    Demo obj2(11,21);
    const Demo obj2(11,21);  // 11   21  // constant object
    obj1.fun();
    obj1.gun();
    obj1.fun();
    //obj3.fun();        //fun( &obj3)
    //obj3.gun();
    return 0;

}