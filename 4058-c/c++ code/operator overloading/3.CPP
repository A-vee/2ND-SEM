#include<iostream>
using namespace std;
class matrix{
  int mat[10][10];
  int row;
  int col;
  public:
  matrix operator *(matrix &c){
     matrix temp;
     temp.row=row;
     temp.col=c.col;
     for(int i=0;i<row;i++){
      for(int j=0;j<c.col;j++){
        temp.mat[i][j]=0;
        for(int k=0;k<col;k++){
            temp.mat[i][j]=temp.mat[i][j]+(mat[i][k]*c.mat[k][j]);
        }
      }
     }
     return temp;
  }
  void get(){
    cout<<"Enter rows and columns for matrix : ";
    cin>>row>>col;
    cout<<"Enter the elements of matrix : "<<endl;
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cin>>mat[i][j];
      }
  }
  }
  void display(){
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cout<<mat[i][j]<<"  ";
      }
      cout<<endl;
    }
  }
};
int main(){
  matrix m1,m2,m3;
  m1.get();
  m2.get();
  m3=m1*m2;
  cout<<"Multiplication of matrices by overloading '*' operator : "<<endl;
  m3.display();
  return 0;}
