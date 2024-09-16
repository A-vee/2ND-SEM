#include<iostream>
using namespace std;
int main(){
int s=0,temp;
cout<<"Enter 5 numbers : ";
for(int i=0;i<5;i++){
  cin>>temp;
  s=s+temp;
}
cout<<"Sum of 5 numbers : "<<s<<endl;
cout<<"Average of 5 numbers : "<<(float)s/5;
return 0;}