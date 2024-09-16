#include<iostream>
using namespace std;
int main(){
int n,s=0;
cout<<"Enter the no. of numbers you want to add : ";
cin>>n;
cout<<"Enter the  "<<n<<" numbers : ";
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    s=s+temp;
}
cout<<"Sum of "<<n<<" numbers : "<<s;
return 0;}