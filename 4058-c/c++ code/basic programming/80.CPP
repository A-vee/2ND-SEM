#include<iostream>
using namespace std;
int main(){
int n,a=0;
cout<<"Enter the no. of subjects : ";
cin>>n;
cout<<"Marks should be out of 100"<<endl;
cout<<"Enter the marks of "<<n<<" subjects : ";
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    a=a+temp;
}
cout<<"Total marks of student : "<<a<<endl;
cout<<"Percentage : "<<(float)a/n<<"%";
return 0;}