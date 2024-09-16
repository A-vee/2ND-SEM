#include<iostream>
using namespace std;

int main()
{
int a,s=0;
cout<<"Enter the number : ";
cin>>a;
int r;
while(a!=0){
r=a%10;
s+=r;
a/=10;}
cout<<"Sum of digits of an integer : "<<s;
return 0;
}