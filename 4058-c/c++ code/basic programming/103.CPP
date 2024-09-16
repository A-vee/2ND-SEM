#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the number : ";
   cin>>n;
      int temp=n,p=0;
      while(n>0){
        p=p*10+(n%10);
        n=n/10;
      }
      if (temp==p){
        cout<<"Pallindrome";
      }
      else{
        cout<<"Not a Pallindrome";
      }
   return 0;}