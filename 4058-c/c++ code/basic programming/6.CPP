#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter the Number A and B : ";
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"Value of A and B after swapping : "<<endl;
cout<<"A : "<<a<<endl<<"B : "<<b;
return 0;}