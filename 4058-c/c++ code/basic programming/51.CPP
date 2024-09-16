#include<iostream>
using namespace std;
int main(){
int mo[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int mn;
cout<<"Enter the no. of month : ";
cin>>mn;
cout<<"No. of days in this month : "<<mo[mn-1];
return 0;}