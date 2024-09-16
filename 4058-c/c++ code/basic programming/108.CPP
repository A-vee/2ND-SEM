#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
float f,r;
cout<<"Enter the float value : "; 
cin>>f;
cout<<"Enter the number of decimal to round up : ";
cin>>n;
r=round(f);
int temp=f,len=0;
while(temp!=0){
    len++;
    temp/=10;
}
r=(float)r/pow(10,len-n);
cout<<"Rounded float value : "<<round(r);
return 0;}