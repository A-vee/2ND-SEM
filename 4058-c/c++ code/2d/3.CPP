#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int x,y,m,n,i,j;
cout<<"Enter the rows and columns for A matrix : ";
cin>>x>>y;
cout<<"Enter the rows and columns for B matrix : ";
cin>>m>>n;
if(y==m){
cout<<"Enter element of A Matrix : "<<endl;
int mata[10][10];
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cin>>mata[i][j];}
}
cout<<"Enter element of B Matrix : "<<endl;
int matb[10][10];
for(i=0;i<m;i++){
for(j=0;j<n;j++){
cin>>matb[i][j];}
}

int mul[10][10];
for(i=0;i<x;i++){
for(j=0;j<n;j++){
mul[i][j]=0;
for(int k=0;k<y;k++){
mul[i][j]=mul[i][j]+mata[i][k]*matb[k][j];}}
}
cout<<"A Matrix : ";
for(i=0;i<x;i++){
cout<<endl;
for(j=0;j<y;j++){
cout<<setw(5)<<mata[i][j];
}}
cout<<endl;
cout<<"B Matrix : "<<endl;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
cout<<setw(5)<<matb[i][j];
}
cout<<endl;}
cout<<"A X B Matrix : ";
for(i=0;i<x;i++){
cout<<endl;
for(j=0;j<n;j++){
cout<<setw(5)<<mul[i][j];
}}}
else{
cout<<"Matrix Multiplication not applicable";}
return 0;}