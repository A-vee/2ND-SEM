#include<iostream>
using namespace std;
int main(){
int n,c=0;
cout<<"Enter the number ";
cin>>n;
while(n!=0){
  c++;
  n/=10;
}
cout<<"Number of digits in the number : "<<c;
return 0;}