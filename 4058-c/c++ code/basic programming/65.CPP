#include<iostream>
using namespace std;
int main(){
int m;
cout<<"Enter the numbers marks ";
cin>>m;
if(m>=81 && m<=100){
    cout<<"A Grade";
   } 
else if(m>=61 && m<=80){
    cout<<"B Grade";
   } 
else if(m>=41 && m<=60){
    cout<<"C Grade";
   } 
else if(m>=0 && m<=40){
    cout<<"D Grade";
   }
else{
    cout<<"Marks given are out of the range (0-100)";
   } 
return 0;}