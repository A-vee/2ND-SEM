#include<iostream>
#include<string>
using namespace std;
int main(){
string st;
cout<<"Enter the string  : ";
cin>>st;
  for(int i=0;i<st.length();i++){
    if(st[i]=='d'){
        st[i]='f';
    }
  }
cout<<"Replacing all 'd' with 'f' : "<<st;
return 0;}