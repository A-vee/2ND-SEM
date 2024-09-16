#include<iostream>
using namespace std;
class fraction{
  int num;
  int den;
  public:
  fraction(int i,int r){
    num=r;
    den=i;
  }
  fraction(){
    num=0;
    den=0;
  }
  fraction operator +(fraction &c){
     fraction temp;
     temp.num=num*c.den+c.num*den;
     temp.den=den*c.den;
     return temp;
  }
  void display(){
    cout<<num<<"/"<<den<<endl;
  }
};
int main(){
   fraction f1(2,3),f2(5,4),f3;
   cout<<"Fractions : "<<endl;
   f1.display();
   f2.display();
   f3=f1+f2;
   cout<<"Sum of fractions  by overloading '+' operator : ";
   f3.display();
   return 0;}
