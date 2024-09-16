#include<iostream>
using namespace std;
int smlth(int a,int b,int c){
    if (a<b){
        if(a<c){
            return a;
        }
        else{
            return c;
        }
    }
    else if(b<c){
        return b;
    }
    else if (a==b && a==c){
       return 0;
    }
    else{
        return c;
    }
}
int main(){
    int n1,n2,n3;
    cout<<"Enter the three numbers A,B and C: ";
    cin>>n1>>n2>>n3;
    cout<<"Smallest among three numbers : "<<smlth(n1,n2,n3); 
    return 0;}
