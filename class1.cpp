#include<iostream>
using namespace std;

class Maths
{
  public:              // access specifier
    int iNo1;          // Characteristics
    int iNo2;          // Characteristics

  Maths()              //default constructor
    {
      iNo1 = 0;
      iNo2 = 0;
    }
    
  Maths(int A, int B)  //parameterised constructor
  {
      iNo1 = A;
      iNo2 = B;
  }

  int Addition()          // behaviour
  {
    return iNo1 + iNo2;
  }

  int Subtraction()      // beahaviour
  {
    return iNo1 - iNo2;
  }

};
int main()
{
    Maths mobj1();
    Maths mobj2(11,10);
    return 0;
}