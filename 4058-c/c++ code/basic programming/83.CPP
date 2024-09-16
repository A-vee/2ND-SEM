#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number ";
cin>>n;
cout<<"Multiplication table of "<<n<<" : "<<endl;
for(int i=1;i<11;i++){
  cout<<n<<" X "<<i<<" = "<<n*i<<endl;
}
return 0;}