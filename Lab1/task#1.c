// WAP in c to find sum of two complex numbers using structure.

#include <stdio.h>

struct Complex
{
  int real;
  int imag;
};

int main()
{
  struct Complex c1, c2, c3;
  printf("Enter real and imaginary part of first complex number:");
  scanf("%d %d", &c1.real, &c1.imag);
  printf("Enter real and imaginary part of second complex number:");
  scanf("%d %d", &c2.real, &c2.imag);
  c3.real = c1.real + c2.real;
  c3.imag = c1.imag + c2.imag;
  printf("The sum is: %d + i%d\n", c3.real, c3.imag);
  return 0;
}
