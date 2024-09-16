#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    float f;
    stringstream s1;
    string st="";
    cout<<"Enter the float to convert it into string : ";
    cin>>f;
    s1<<f;
    s1>>st;
    cout<<"Float after conversion to string : "<<st;
    return 0;}

