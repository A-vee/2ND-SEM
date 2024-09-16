#include<iostream>
using namespace std;
class Rectangle{
  int length;
  int width;
  public:
  Rectangle(int a,int b){
    length=a;
    width=b;
  }
  int operator ==(Rectangle &r){
     if(length==r.length && width==r.width){
       return true;
     }
     else{
      return false;
     }
  }
  void display(){
    cout<<"Width : "<<width<<" Length : "<<length<<endl;
  }
};
int main(){
  Rectangle r1(10,7),r2(10,5);
  cout<<"Rectangles  : "<<endl;
  r1.display();
  r2.display(); 
  cout<<"Comparison of rectangles by overloading '==' operator (1:True 0:False) : "<<(r1==r2);
  return 0;}
