#include<iostream>
using namespace std;
int main(){
    int d,o=0,p=1,temp;
    cout<<"Enter the Decimal number : ";
    cin>>d;
    while(d!=0){
        temp=d%8;
        o=o+(p*temp);
        d=d/8;
        p=p*10;
    }
    cout<<"Octal number : "<<o;
    return 0;}
