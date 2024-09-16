#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int n;
    char ch;
    cout<<"Enter the integer to change it into char : ";
    cin>>n;
    ch='0'+n;
    cout<<"Integer after conversion into character : "<<ch;
    return 0;}
