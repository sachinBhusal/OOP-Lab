// Write a program in CPP to find the sum of two complex numbers using the OOP concept

#include <iostream>
using namespace std;

class Complex
{
  int real;
  int imag;
public:
  void setComplex();
  void showComplex();
  Complex addComplex(Complex, Complex);
};

void Complex::setComplex()
{
  cout<<"Enter a complex number:: "<<endl;
  cin>>real>>imag;
}

void Complex::showComplex()
{
  cout<<real<<" + "<<imag<<"i "<<endl;
}

Complex Complex::addComplex(Complex c1, Complex c2)
{
  Complex c3;
  c3.real = c1.real + c2.real;
  c3.imag = c1.imag + c2.imag;
  return c3;
}

int main()
{
  Complex c1, c2, c3;
  c1.setComplex();
  c2.setComplex();
  c3 = c3.addComplex(c1, c2);
  cout<<"The sum is: "<<endl;
  c3.showComplex();
  return 0;
}
