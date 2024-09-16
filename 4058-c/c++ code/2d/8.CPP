#include<iostream>
using namespace std;
int main(){
int x,y,i,j,o=0,e=0;
cout<<"Enter the rows and columns For Matrix: ";
cin>>x>>y;
int mata[10][10];
cout<<"Enter the elements of matrix : "<<endl;
for(i=0;i<x;i++){

for(j=0;j<y;j++){
cin>>mata[i][j];}
}
for(i=0;i<x;i++){
for(j=0;j<y;j++){
   if(mata[i][j]%2==0){
   e++;
   }
   else{
   o++;}
}}
cout<<"Frequency of odd No. : "<<o<<endl;
cout<<"Frequency of Even No. : "<<e<<endl;
return 0;}