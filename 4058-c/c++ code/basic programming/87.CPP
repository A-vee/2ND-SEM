#include<iostream>
using namespace std;
int main(){
int n,c=0;
cout<<"Enter the number : ";
cin>>n;
for(int j=2;j<n;j++){
    if(n%j==0){
         c=1;        
       }
    }
    if(c==0){
        cout<<"Prime No. ";
    }
    else{
        cout<<"Not a prime no.";
    }
return 0;}