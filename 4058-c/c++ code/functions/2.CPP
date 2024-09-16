#include<iostream>
using namespace std;
float avg(int a,int b,int c){
    return ((a+b+c)/3.0);
    }
int main(){
    int n1,n2,n3;
    cout<<"Enter the three numbers A,B and C: ";
    cin>>n1>>n2>>n3;
    cout<<"Average of three numbers : "<<avg(n1,n2,n3); 
    return 0;}
