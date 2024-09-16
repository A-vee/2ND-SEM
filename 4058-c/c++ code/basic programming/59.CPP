#include<iostream>
using namespace std;
int main(){
float n,s=0,c=0;
cout<<"Enter the number of number of odd terms : ";
cin>>n;
cout<<" Terms of odd natural no. : "<<endl;
for(int i=1;c<n;i++){
  if(i&1==1){
    cout<<i<<endl;
    c++;
    s+=i; 
  } 
    }
    cout<<"Sum of "<<n<<" odd terms : "<<s;
return 0;}