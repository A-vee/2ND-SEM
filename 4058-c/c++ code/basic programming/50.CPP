#include<iostream>
using namespace std;
int main(){
float a,b,c;
cout<<"Enter the no. A,B and C : ";
cin>>a>>b>>c;
if(a>b){
    if(a>=c){
    if (a!=c){
    cout<<"A is Greatest";
    }
    else{
        cout<<"Both A and C are Greater";
    }}
    else{
        cout<<"C is Greatest "; 
    }
}
else if(b>=c){
    if(a==b){
        cout<<"A and B are Greater";
    }
    else if (b!=c){
    cout<<"B is Greatest";
    }
    else{
        cout<<"Both B and C are Greater";
    }
}
else if(c>b){
    cout<<"C is Greatest";
}
else{
    cout<<"All are equal ";
}
return 0;}