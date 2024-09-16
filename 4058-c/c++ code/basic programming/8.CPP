#include<iostream>
using namespace std;
int main(){
int a=0;
long b,p=1;
cout<<"Enter the Number in binary: ";
cin>>b;
while(b>0){
int r;
r=b%10;
a=a+(r*p);
b=b/10;
p=p*2;}
cout<<"Decimal value : "<<a;
return 0;}