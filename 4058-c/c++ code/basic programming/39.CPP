#include<iostream>
using namespace std;
int main(){
int n,a=0;
cout<<"Enter the no. of subjects : ";
cin>>n;
cout<<"Enter the marks of "<<n<<" subjects : ";
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    a=a+temp;
}
cout<<"Average marks : "<<(float)a/n;
return 0;}