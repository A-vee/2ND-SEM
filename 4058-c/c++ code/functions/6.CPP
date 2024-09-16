#include<iostream>
using namespace std;
int connch(int a,int b,int c){
  if(abs(a-b)==1 && abs(a-c)==2){
      return true;
  }
  else if(abs(a-c)==1 && abs(a-b)==2){
     return true;
  }
  else if(abs(c-b)==1 && abs(c-a)==2){
    return true;
  }
  else if(abs(c-b)==2 && abs(c-a)==1){
    return true;
  }
  else{
    return false;
  }
}
int main(){
    int n1,n2,n3;
    cout<<"Enter the three numbers A,B and C: ";
    cin>>n1>>n2>>n3;
    cout<<"Consecutive (0:false and 1:True): "<<connch(n1,n2,n3); 
    return 0;}
