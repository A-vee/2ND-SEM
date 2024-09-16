#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    double d;
    stringstream s1;
    string st="";
    cout<<"Enter the string to convert it into double : ";
    cin>>st;
    s1<<st;
    s1>>d;
    cout<<"String after conversion to double : "<<d;
    return 0;}

