#include<iostream>
#include<math.h>
using namespace std;
int main(){
float p,r,t,tem;
cout<<"Enter the Principal balance : ";
cin>>p;
cout<<"Enter the interest rate : ";
cin>>r;
cout<<"Enter the time period : ";
cin>>t;
tem=pow((1+r/100),t);
cout<<"Compound interest : "<<(p*tem)-p;
return 0;}