#include<iostream>
using namespace std;
int main(){
int n,e=0,o=0;
cout<<"Enter the number of integers you want to add: ";
cin>>n;
cout<<"Enter "<<n<<" integers : ";
int temp;
for(int i=0;i<n;i++){
    cin>>temp;
    if(temp&1==1){
        o+=temp;
    }
    else{
        e+=temp;
    }
}
cout<<"Sum of odd integers : "<<o<<endl;;
cout<<"Sum of even integers : "<<e;
return 0;}