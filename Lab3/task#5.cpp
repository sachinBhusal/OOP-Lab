#include <iostream>
using namespace std;

class MatrixMultiply
{
  int matrix[3][3];
  friend MatrixMultiply operator * (MatrixMultiply, MatrixMultiply);
public:
  void setMatrix()
  {
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<3; j++)
      {
        cin>>matrix[i][j];
      }
    }
  }
  void showMatrix()
  {
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<3; j++)
      {
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
    }
  }

};

MatrixMultiply operator * (MatrixMultiply mt1, MatrixMultiply mt2)
{
  MatrixMultiply mat;
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      int sum = 0;
      for(int k=0; k<3; k++)
      {
        sum += mt1.matrix[i][k] * mt2.matrix[k][j];
      }
      mat.matrix[i][j] = sum;
    }
  }
  return mat;
}

int main()
{
  MatrixMultiply mp1, mp2, mp3;
  cout<<"Enter first matrix: "<<endl;
  mp1.setMatrix();
  cout<<"Enter second matrix: "<<endl;
  mp2.setMatrix();
  mp3 = mp1 * mp2;
  cout<<"Matrix product is: "<<endl;
  mp3.showMatrix();
  return 0;
}
