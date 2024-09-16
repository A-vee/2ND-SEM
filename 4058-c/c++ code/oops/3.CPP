#include<iostream>
using namespace std;
class Rectangle{
float width,height;
public:
void get(){
  cout<<"Enter width and height : ";
  cin>>width>>height;
}
void area(){
  cout<<"Area : "<<((float)width*height)<<endl;
}
void perim(){
  cout<<"Perimeter : "<<((float)2*(width+height))<<endl;
}
};
int main(){
  Rectangle r1;
  r1.get();
  r1.area();
  r1.perim();
  return 0;}