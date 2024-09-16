#include<iostream>
#include<string>
using namespace std;
int main(){
string st1;
cout<<"Enter the string  : ";
cin>>st1;
for(int i=0;i<st1.length();i++){
    if(st1[i]>=65 && st1[i]<=90){
    st1[i]=st1[i]+32;
    }
}
cout<<"All character in lowercase : "<<st1;
return 0;}