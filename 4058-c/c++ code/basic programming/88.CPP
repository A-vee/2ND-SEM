#include<iostream>
using namespace std;
int main(){
int a,b,r;
cout<<"Enter the number A and B : ";
cin>>a>>b;
if(a>b){
    r=b;
   }
   else{
    r=a;
}
while(r>0){
  if(a%r==0 && b%r==0){
    break;
  }
  r--;
}
cout<<"HCf of "<<a<<" and "<<b<<" : "<<r;
cout<<"LCM of "<<a<<" and "<<b<<" : "<<(a*b)/r;
return 0;}