#include<iostream>
using namespace std;
int main(){
    int d=0,o,p=1,temp;
    cout<<"Enter the octal number : ";
    cin>>o;
    while(o!=0){
        temp=o%10;
        d=d+(p*temp);
        o=o/10;
        p=p*8;
    }
    cout<<"Decimal number : "<<d;
    return 0;}
