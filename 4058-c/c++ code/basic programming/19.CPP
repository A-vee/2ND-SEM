#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   int s,h=0,m=0;
   cout<<"Enter the seconds : ";
   cin>>s;
   m=s/60;
   s=s%60;
   h=m/60;
   m=m%60;
   cout<<setw(3)<<"H"<<setw(3)<<"M"<<setw(3)<<"S"<<endl;
   cout<<setw(3)<<h<<setw(3)<<m<<setw(3)<<s;
   return 0;}