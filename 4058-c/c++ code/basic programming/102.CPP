#include<iostream>
using namespace std;
int main(){
int m;
cout<<"Enter the number : ";
cin>>m;
if((m&1)==0){
    cout<<"Even number ";
}
else{
    cout<<"Not an even number";
}
return 0;}