#include<iostream>
#include<string>
using namespace std;
int main(){
string st="hii hello hii \nThis that there\nthan their that";
cout<<"String : "<<endl<<st;
int c=0;
for(int i=0;i<st.length();i++){ 
     if(st[i]=='\n'){
        c++;
     }
}
cout<<endl<<"Total number of lines : "<<c+1;
return 0;}