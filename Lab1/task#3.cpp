// wAP in CPP to show the concept of function overloading

#include <iostream>
#define PI 3.14
using namespace std;

int area(int r)
{
  return (PI * r * r);
}

int area(int l, int b)
{
  return (l*b);
}

int main()
{
  int r, a, b;
  cout<<"Enter radius of circle: "<<endl;
  cin>>r;
  cout<<area(r)<<endl;
  cout<<"Enter length and breadth of rectangle: "<<endl;
  cin>>a>>b;
  cout<<area(a, b);
  return 0;
}
