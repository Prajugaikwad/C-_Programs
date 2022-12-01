#include<iostream>
using namespace std;
class Overloading
{
    public:

    //Add@2ii
     int Add(int a, int b) 
      {
         cout<<"Addition of \n";
      }

      //Add@2ff
      float Add(float a, float b) 
      {
         cout<<"Addition of floats is \n";
      }

      //Add@2dd
      double Add(double a, double b) 
      {
         cout<<"Addition of double is\n";
      }

      //Add@3iii
      int Add(int a, int b, int c) 
      {
         cout<<"Addition of 3 integers is\n";
      }
      //fun@if
      void Fun(int a, float b)
      {

      }
      //fun@fi
      void Fun(int a, float b)
      {
        
      }

};

int main()
{
    Overloading obj;
    obj.Add(11,21);
    obj.Add(11,21,51);
    return 0;
}
