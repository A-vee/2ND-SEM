#include<iostream>
using namespace std;
int main(){
float l,w,h;
cout<<"Enter the  lenght,width,height of cuboid : ";
cin>>l>>w>>h;
cout<<"Total surface area : "<<2*(h*l+h*w+l*w);
return 0;}