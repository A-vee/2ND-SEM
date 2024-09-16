#include<iostream>
using namespace std;
int main(){
float s1,s2,s3,l,h,b;
cout<<"Enter the sides of the triangle in prism : ";
cin>>s1>>s2>>s3;
cout<<"Enter the height,length,base of the prism : ";
cin>>h>>l>>b;
cout<<"Total Surface Area : "<<(s1+s2+s3)*l+(b*h);
return 0;}