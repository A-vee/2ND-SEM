#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number ";
cin>>n;
cout<<"Number in reverse order : ";
while(n!=0){
    cout<<n%10;
    n=n/10;
}
return 0;}