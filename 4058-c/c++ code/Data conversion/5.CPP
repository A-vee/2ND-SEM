#include<iostream>
#include<string>
using namespace std;
int main(){
    float f;
    string st="";
    cout<<"Enter the string to convert it into float : ";
    cin>>st;
    f=stof(st);
    cout<<"String after conversion to float : "<<f;
    return 0;}

