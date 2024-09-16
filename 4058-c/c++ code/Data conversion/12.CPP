#include<iostream>
using namespace std;
int main(){
    int d,p=1,temp;
    long long b=0;
    cout<<"Enter the decimal number : ";
    cin>>d;
    while (d!=0){
       temp=d%2;
       b=b+(temp*p);
       p=p*10;
       d=d/2;
    }
    cout<<"Binary value of decimal: "<<b;
    return 0;}
