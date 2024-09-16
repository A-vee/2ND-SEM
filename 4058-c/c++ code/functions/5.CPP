#include<iostream>
using namespace std;
int countd(int n){
    int c=0,r;
    while(n!=0){
       r=n%10;
       if(r==2){
        c++;
       }
       n/=10;
    }
    return c;
    }
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"No. of digits with value 2 : "<<countd(n);
    return 0;}
