#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int a,b;
   cout<<"Enter the number A and B : ";
   cin>>a>>b;
   for(int i=0;i<b;i++,a++);
   cout<<"Sum of A and B without arthmetic operators : "<<a;
   return 0;}