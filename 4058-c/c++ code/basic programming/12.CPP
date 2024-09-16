#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
string st;
int i,n=0,l=0,s=0,o=0;
cout<<"Enter the string : ";
getline(cin,st);
for(i=0;i<st.length();i++){
if(isalpha(st[i])){
l++;}
else if(isdigit(st[i])){
n++;}
else if(st[i]==' '){
s++;}
else{
o++;}
}
cout<<"Number of Letters : "<<l<<endl;
cout<<"Number of Digit characters : "<<n<<endl;
cout<<"Number of Spaces : "<<s<<endl ;
cout<<"Number of other characters : "<<o<<endl ;
return 0;}