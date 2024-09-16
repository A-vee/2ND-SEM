#include<iostream>
using namespace std;
int facrec(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*facrec(n-1);
    }
}
int main(){
int num;
cout<<"Enter the number for factorial : ";
cin>>num;
cout<<"Factorial using recursion : "<<facrec(num);
return 0;}