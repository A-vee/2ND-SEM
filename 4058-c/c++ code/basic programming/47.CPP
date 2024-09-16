#include<iostream>
using namespace std;
int main(){
int c,s;
cout<<"Enter the commission : ";
cin>>c;
cout<<"Enter the total sales : ";
cin>>s;
cout<<"Commission Rate : "<<(float)c/s*100<<"%";
return 0;}