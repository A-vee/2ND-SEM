#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter the numbers A,B and C : ";
cin>>a>>b>>c;
if(a>b){
  if(a>c){
    cout<<"Decreasing order";
  }
}
else if(b<c){
  cout<<"Increasing order";
}
else{
  cout<<"Not increasing nor decreasing order";
}
return 0;}