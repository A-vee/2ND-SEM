#include<iostream>
#include<string>
using namespace std;
int main(){
string st;
cout<<"Enter the string : ";
cin>>st;
int i=0;
while(st[i]!='\0'){
    i++;
}
cout<<"Lenght of the string : "<<i;
return 0;}