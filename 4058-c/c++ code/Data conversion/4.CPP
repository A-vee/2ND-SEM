#include<iostream>
#include<string>
using namespace std;
int main(){
    long n;
    string st="";
    cout<<"Enter the integer to change it into string : ";
    cin>>n;
    st=to_string(n);
   cout<<"Integer after conversion to string : "<<st;
   return 0;}

