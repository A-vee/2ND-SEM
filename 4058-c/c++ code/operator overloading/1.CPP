#include<iostream>
using namespace std;
class complex{
  int imag;
  int real;
  public:
  complex(int i,int r){
    real=r;
    imag=i;
  }
  complex(){
    real=0;
    imag=0;
  }
  complex operator +(complex &c){
     complex temp;
     temp.real=real+c.real;
     temp.imag=imag+c.imag;
  }
  void display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
  }
};
int main(){
   complex c1(10,3),c2(5,4),c3;
   cout<<"Complex numbers : "<<endl;
   c1.display();
   c2.display();
   c3=c1+c2;
   cout<<"Sum of complex numbers by overloading '+' operator : ";
   c3.display();
   return 0;}
