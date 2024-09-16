#include<iostream>
using namespace std;
int main(){
float n,r=1;
cout<<"Enter the number : ";
cin>>n;
for(int i=0;i<3;i++){
        r=r*n;
    }
    cout<<"Cube of "<<n<<" : "<<r;
return 0;}