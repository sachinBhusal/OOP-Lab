// Write a program in CPP to input the name, roll, marks and address of a student from the user and
// display the entered details using the concept of class and object.

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
  cout<<"Student details: "<<endl;
  cout<<"Name: "<<name<<endl<<"roll: "<<roll<<endl<<"Marks: "<<marks<<endl<<"Address: "<<address<<endl;
}

int main()
{
  Student s;
  s.setData();
  s.showData();
  return 0;
}
