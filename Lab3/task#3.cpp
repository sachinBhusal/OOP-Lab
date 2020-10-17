#include <iostream>
using namespace std;

class Complex
{
  float real;
  float imag;
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

  Complex operator + (Complex comp)
  {
    Complex ret;
    ret.real = real + comp.real;
    ret.imag = imag + comp.imag;
    return ret;
  }
};

int main()
{
  Complex c1(1.0, 2.1), c2(3.1, 4.0), c3;
  c3 = c1 + c2;
  c3.showComplex();
  return 0;
}
