#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int x,y,i,j;
cout<<"Enter the rows and columns : ";
cin>>x>>y;
int mat[10][10];
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cout<<"Matrix element "<<i+1<<j+1<<" : ";
cin>>mat[i][j];}
}
cout<<"Matrix : "<<endl;
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cout<<setw(5)<<mat[i][j];
}
cout<<endl;}
return 0;}