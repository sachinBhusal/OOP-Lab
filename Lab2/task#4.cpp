// Write a program in CPP to illustrate the concept of constructor(default, parameterized and copy
// constructor) and destructor taking class complex as an example.

#include <iostream>
using namespace std;

class Complex
{
  int real;
  int imag;
public:
  // Defalut Constructor
  Complex()
  {
    cout<<"Hello from default constructor"<<endl;
    real = 0;
    imag = 0;
    cout<<real<<" + "<<imag<<"i "<<endl;
  }
  // Parameterized Constructor
  Complex(int r, int i)
  {
    cout<<"Hello from Parameterized constructor"<<endl;
    real = r;
    imag = i;
    cout<<real<<" + "<<imag<<"i "<<endl;
  }
  // Destructor
  ~Complex()
  {
    cout<<"Hello from destructor"<<endl;
  }
  //Copy Constructor
  Complex(Complex &c)
  {
    cout<<"Hello from copy constructor"<<endl;
    real = c.real;
    imag = c.imag;
    cout<<real<<" + "<<imag<<"i "<<endl;
  }
};

int main()
{
  Complex c1(1,2), c2(c1), c3; //c1 will call Parameterized constructor and c2 will call copy constructor.
  return 0;
}
