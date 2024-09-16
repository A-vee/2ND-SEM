#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    double d;
    stringstream s1;
    string st="";
    cout<<"Enter the double to convert it into string : ";
    cin>>d;
    s1<<d;
    s1>>st;
    cout<<"String after conversion to double : "<<st;
    return 0;}

