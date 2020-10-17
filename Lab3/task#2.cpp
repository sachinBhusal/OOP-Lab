#include <iostream>
using namespace std;

class Complex
{
  int real;
  int imag;
  friend Complex operator ++ (Complex &, int);
  friend Complex operator ++ (Complex &);
public:
  Complex()
  {
    real = 0;
    imag = 0;
  }
  Complex(int r, int i)
  {
    real = r;
    imag = i;
  }
  void showComplex()
  {
    cout<<real<<" + "<<imag<<"i "<<endl;
  }
};

Complex operator ++ (Complex &c) //pre-increment
{
  Complex ret;
  ret.real = ++c.real;
  ret.imag = ++c.imag;
  return ret;
}

Complex operator ++ (Complex &c, int) //post-increment
{
  Complex ret;
  ret.real = c.real++;
  ret.imag = c.imag++;
  return ret;
}

int main()
{
  Complex c1(1, 2), c2(3, 4), c3, c4;
  c3 = ++c2;
  c4 = c1++;
  c1.showComplex();
  c2.showComplex();
  c3.showComplex();
  c4.showComplex();
  return 0;
}
