#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int x,y,m,n,i,j;
cout<<"Enter the rows and columns For A : ";
cin>>x>>y;
cout<<"Enter the rows and columns For B : ";
cin>>m>>n;
if (x==m && y==n){
int mata[10][10],c=0;
cout<<"Enter the elements of A matrix : "<<endl;
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cin>>mata[i][j];}
}
int matb[10][10];
cout<<"Enter the elements of B matrix :"<<endl;
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cin>>matb[i][j];}
}
for(i=0;i<x;i++){
for(j=0;j<y;j++){
if (mata[i][j]!=matb[i][j]){
c=1;}}}
if(c==0){
cout<<"Equal Matrices";}
else{
cout<<"Not Equal Matrices";}}
else{
cout<<"Not Equal Matrices";}
return 0;}