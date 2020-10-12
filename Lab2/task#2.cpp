// Write a program in CPP to input the name, roll, marks and address of n students from the user and
// display the entered details using the concept of class and objects

#include <iostream>
#define MAX 20
using namespace std;

class Student
{
  char name[MAX];
  int roll;
  int marks;
  char address[MAX];
public:
  void setData();
  void showData();
};

void Student::setData()
{
  cout<<"Enter name, roll, marks and address of student: "<<endl;
  cin>>name>>roll>>marks>>address;
}

void Student::showData()
{
  cout<<"Name: "<<name<<endl<<"roll: "<<roll<<endl<<"Marks: "<<marks<<endl<<"Address: "<<address<<endl;
  cout<<endl;
}

int main()
{
  Student s[MAX];
  int n;
  cout<<"Enter no of students: "<<endl;
  cin>>n;
  for(int i=0; i<n; i++)
    s[i].setData();
  cout<<endl;
  cout<<"Student details: "<<endl<<endl;
  for(int i=0; i<n; i++)
    s[i].showData();
  return 0;
}
