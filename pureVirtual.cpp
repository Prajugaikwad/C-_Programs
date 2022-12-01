#include<iostream>
using namespace std;

class Circle
{
   public:       // access Specifier
     float PI;   // characteristic
     float Radius;
     Circle()      // default constructor
     {
        PI = 3.14;
        Radius = 0.0;
     }
     Circle(float A, float B)  // parameterised constructor
     {
        PI = A;
        PI = B;
     }
     void Display()   ///concrete method
     {
       cout<<"Value of radius is : "<<Radius<<"\n";
     }
     virtual float Area() = 0;  //abstract
     virtual float Circumference() = 0;

};
class Marvellous : public Circle  // single level ineritance
{
   public:
       Marvellous() : Circle()
       {
          
       }
       Marvellous(float X, float Y) : Circle(X, Y)
       {

       }
       float area()  // concrete
       {
        float Ans = PI * Radius * Radius;
        return Ans;
       }
       float Circumference()  // concrete
       {
        float Ans = 0.0 ;
        Ans = 2 * PI * Radius;
        return Ans;
       }
};

int main()
{
     
    Marvellous mobj1;
    Marvellous mobj2(3.14,10.09);

    float fret= 0.0;

    fret  = mobj2.Area();
    cout<<"Area is"<<fret<<"\n";

    fret = mobj2.Circumference();
    cout<<"circumference is" <<fret<<"\n";


    return 0;
}
