#include<iostream>
#include<string>
using namespace std;
int main(){
string st,subst="";
int strt,end;
cout<<"Enter the string  : ";
cin>>st;
cout<<"Enter the  starting and ending position for substring : ";
cin>>strt>>end;
if(strt>=0 && end<=st.length()){
  for(int i=strt-1;i<end;i++){
    subst+=st[i];
  }
  cout<<"Substring : "<<subst;
  }
  else{
    cout<<"Invalid Range ";
  }
return 0;}