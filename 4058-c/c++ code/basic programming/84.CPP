#include<iostream>
using namespace std;
int main(){
int n,f=1;
cout<<"Enter the number you want factorial : ";
cin>>n;
if(n>0){
for(int i=1;i<n+1;i++){
   f=f*i;
}
cout<<"Factorial of "<<n<<" : "<<f;}
else if(n==0){
    cout<<"Factorial of "<<n<<" : "<<1;
}
else{
    cout<<"Not define";
}
return 0;}