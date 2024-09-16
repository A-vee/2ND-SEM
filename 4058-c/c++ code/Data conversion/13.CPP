#include<iostream>
#include<string>
using namespace std;
int main(){
    int d=0,p=1,dig;
    string st;
    cout<<"Enter the Hexadecimal number (alpha values must be capital): ";
    cin>>st;
    for(int i=st.length()-1;i>=0;i--){
       dig=st[i]-'0';
       if (dig>=0 && dig<=9){
       d=d+(dig*p);
       }
       else{
        dig=st[i]+'0';
        char hex[]="ABCDEF";
        if (st[i]==hex[0]){
            d=d+(10*p);
        }
        else if (st[i]==hex[1]){
            d=d+(11*p);
        }
        else if (st[i]==hex[2]){
            d=d+(12*p);
        }
        else if (st[i]==hex[3]){
            d=d+(13*p);
        }
        else if (st[i]==hex[4]){
            d=d+(14*p);
        }
        else{
            d=d+(15*p);
        }
       }
       p=p*16;
    }
    cout<<"Decimal value of Hexadecimal : "<<d;
    return 0;}
