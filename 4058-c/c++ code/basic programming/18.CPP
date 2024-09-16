#include<iostream>
#include<string>
using namespace std;
int main(){
    string st;
    int n=0,p=10;
    cout<<"Enter the integers for string : ";
    cin>>st;
    for(int i=0;i<st.length();i++){
       n=p*n+(st[i]-'0');
       cout<<p<<endl;
   }
   cout<<n;
   return 0;}
