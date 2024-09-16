#include<iostream>
using namespace std;
int main(){
int x,y,i,j,c=0;
cout<<"Enter the rows and columns For Matrix: ";
cin>>x>>y;
int mat[10][10];
cout<<"Enter the elements of matrix : "<<endl;
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cin>>mat[i][j];}
}
for(i=0;i<x;i++){
for(j=0;j<y;j++){
if(mat[i][j]==0){
c++;}}}
if(c>((x*y)/2)){
cout<<"Sparse Matrix ";}
else{
cout<<"Not a Sparse Matrix ";}
return 0;}