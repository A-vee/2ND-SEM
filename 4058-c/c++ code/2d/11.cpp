#include<iostream>
using namespace std;
int main(){
int x,y,i,j,c=0;
cout<<"Enter the rows and columns For Matrix: ";
cin>>x>>y;
if(x==y){
int mat[10][10];
cout<<"Enter the elements of matrix : "<<endl;
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cin>>mat[i][j];}
}
for(i=0;i<x;i++){
for(j=0;j<y;j++){
if(i==j){
if(mat[i][j]!=1){
c=1;}
}
}}
if(c==1){
cout<<"Not an identity matrix ";}
else{
cout<<"Its an Identity matrix ";} }
else{
cout<<"Matrix should be square ";}
return 0;}