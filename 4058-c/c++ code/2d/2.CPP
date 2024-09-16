#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int x,y,i,j;
cout<<"Enter the rows and columns : ";
cin>>x>>y;
int mata[10][10];
cout<<"Enter elements of Matrix A "<<endl;
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cin>>mata[i][j];}
}
int matb[10][10];
cout<<"Enter elements of Matrix B"<<endl;
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cin>>matb[i][j];}
}
cout<<"A Matrix : ";
for(i=0;i<x;i++){
cout<<endl;
for(j=0;j<y;j++){
cout<<setw(5)<<mata[i][j];
}
}
cout<<endl;
cout<<"B Matrix : ";
for(i=0;i<x;i++){
cout<<endl;
for(j=0;j<y;j++){
cout<<setw(5)<<matb[i][j];
}
}
cout<<endl;
cout<<"A+B Matrix : "<<endl;
for(i=0;i<x;i++){
for(j=0;j<y;j++){
cout<<setw(5)<<mata[i][j]+matb[i][j];
}
cout<<endl;}
return 0;}