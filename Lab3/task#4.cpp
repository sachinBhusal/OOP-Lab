#include <iostream>
using namespace std;

class Complex
{
  float real;
  float imag;
  friend Complex operator + (Complex, Complex);
public:
  Complex()
  {
    real = 0;
    imag = 0;
  }

  Complex(float r, float i)
  {
    real = r;
    imag = i;
  }

  void showComplex()
  {
    cout<<real<<" + "<<imag<<"i "<<endl;
  }
};

Complex operator + (Complex comp1, Complex comp2)
{
  Complex ret;
  ret.real = comp1.real + comp2.real;
  ret.imag = comp1.imag + comp2.imag;
  return ret;
}

int main()
{
  Complex c1(1.0, 2.1), c2(3.1, 4.0), c3;
  c3 = c1 + c2;
  c3.showComplex();
  return 0;
}
