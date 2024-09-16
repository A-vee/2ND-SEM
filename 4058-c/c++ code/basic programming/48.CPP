#include<iostream>
#include<math.h>
using namespace std;
int main(){
float x1,x2,y1,y2,d;
cout<<"Enter the x1,x2 points : ";
cin>>x1>>x2;
cout<<"Enter the y1,y2 points : ";
cin>>y1>>y2;
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
cout<<"Distance : "<<d;
return 0;}