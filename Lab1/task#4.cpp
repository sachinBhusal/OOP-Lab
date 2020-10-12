// WAP in CPP to show the concept of inline function.

#include <iostream>
using namespace std;

inline int SI(int p, int t, int r)
{
  return (p*t*r/100);
}
int main()
{
  int p, t, r;
  cout<<"Enter p, t and r"<<endl;
  cin>>p>>t>>r;
  cout<<"Simple intrest is: "<<SI(p, t, r)<<endl;
  return 0;
}
