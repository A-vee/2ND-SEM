#include<iostream>
#include<cctype>
using namespace std;
int main(){
    int n,t,p=1,s=0;
    cout<<"Enter the number : ";
    cin>>n;
    if (isdigit(n)){
    cout<<"Enter the number of Times : ";
    cin>>t;
    p*=n;
    for (int i=0;i<t;i++){
     s+=p;
     p=p*10+n;
    }
    cout<<"Result : "<<s;}
    else{
        cout<<"Integer is require for this Equation ";
    }
return 0;}