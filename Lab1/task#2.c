// WAP in C to take details of n students i.e name, roll, marks and address and show result using Structure

#include <stdio.h>
#define MAX 10

struct Student
{
  char name[MAX];
  int roll;
  int marks;
  char address[MAX];
};

int main()
{
  int n, i;
  printf("Enter no of students:");
  scanf("%d", &n);
  struct Student s[MAX];
  printf("Enter name, roll, marks and address of students:");
  for(i=0; i<n; i++)
  {
    scanf("%s %d %d %s", s[i].name, &s[i].roll, &s[i].marks, s[i].address);
  }
  for(i=0; i<n; i++)
  {
    printf("Name: %s, Roll: %d, Marks: %d   Address: %s\n", s[i].name, s[i].roll, s[i].marks, s[i].address);
  }
  return 0;
}
