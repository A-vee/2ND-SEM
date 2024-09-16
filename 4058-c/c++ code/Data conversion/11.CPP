#include<iostream>
using namespace std;
int main(){
    int d=0,p=1,temp;
    long long b;
    cout<<"Enter the number in binary : ";
    cin>>b;
    while (b!=0){
       temp=b%10;
       d=d+(temp*p);
       p=p*2;
       b=b/10;
    }
    cout<<"Decimal value of binary : "<<d;
    return 0;}
