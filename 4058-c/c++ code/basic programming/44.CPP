#include<iostream>
using namespace std;
int main(){
int n,temp,s=0;
cout<<"Marks should be out of 100 of each subject "<<endl;
cout<<"Enter the no. of subjects : ";
cin>>n;
cout<<"Enter the marks of "<<n<<" subjects : ";
for(int i=0;i<n;i++){
   cin>>temp;
   s=s+temp;
}
cout<<"CGPA : "<<(float)(s/n)/9.5;
return 0;}