#include<iostream>
#include<math.h>
using namespace std;
int main(){
int c=0,a,b;
while(1){
cout<<endl<<"Enter the choice for the operation in integer you want to perform :"<<endl;
cout<<"1.ADDITION\t2.SUBTRACTION\n3.MULTIPLICATION  4.DIVISION\n5.EXPONENTIAL\t6.PERCENTAGE\n7.EXIT : ";
cin>>c;
if(c==7){
  cout<<"Exited";
  break;
}
cout<<"Enter A and B : ";
cin>>a>>b;
if(c==1){
  cout<<"Addition : "<<a+b;
}
else if(c==2){
  cout<<"Subtraction (B-A) : "<<b-a;
}
else if(c==3){
  cout<<"Multiplication : "<<a*b;
}
else if(c==4){
  cout<<"Division (B/A) : "<<b/a;
}
else if(c==5){
  cout<<"Exponential (A^B): "<<pow(a,b);
}
else if(c==6){
  cout<<"Percentage (A/B*100) : "<<(float)a/b*100;
}
else{
  cout<<"Invalid Choice";
}
}return 0;}