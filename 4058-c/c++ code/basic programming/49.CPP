#include<iostream>
using namespace std;
int main(){
float n,p,r=1;
cout<<"Enter the number : ";
cin>>n;
cout<<"Enter power : ";
cin>>p;
if(p>0){
    for(int i=0;i<p;i++){
        r=r*n;
    }
    cout<<"Result of "<<n<<"^"<<p<<" : "<<r;}
else if(p==0){
    cout<<"Result of "<<n<<"^"<<p<<" : "<<r;}
else{
    for(int i=0;i<-p;i++){
        r=r*(1.0/n);
    }
    cout<<"Result of "<<n<<"^"<<p<<" : "<<r;
}
return 0;}