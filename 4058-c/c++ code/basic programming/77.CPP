#include<iostream>
#include<string>
using namespace std;
int main(){
string st="HELLO WORLD";
char temp;
cout<<"String : "<<st;
int len=st.length()-1;
for(int i=0;i<(len+1)/2;i++){ 
     temp=st[i];
     st[i]=st[len-i];
     st[len-i]=temp;
}
cout<<endl<<"Reverse of string : "<<st;
return 0;}