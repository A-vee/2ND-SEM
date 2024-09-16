#include<iostream>
using namespace std;
int main(){
int a;
long b=0,p=1;
cout<<"Enter the Number : ";
cin>>a;
while(a>0){
b=b+(a%2)*p;
a=a/2;
p=p*10;}
cout<<"Binary value : "<<b;
return 0;}