#include<iostream>
using namespace std;
class Circle{
float radius;
public:
void get(){
  cout<<"Enter the radius : ";
  cin>>radius;
}
void dis(){
  cout<<"Radius : "<<radius<<endl;
}
void area(){
  cout<<"Area : "<<22.0/7.0*(radius*radius)<<endl;
}
void circu(){
  cout<<"Circumference : "<<2.0*(22.0/7.0)*radius<<endl;
}
};
int main(){
   Circle c;
   c.get();
   c.dis();
   c.circu();
   c.area();
}