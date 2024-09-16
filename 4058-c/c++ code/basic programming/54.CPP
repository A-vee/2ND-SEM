#include<iostream>
using namespace std;
int main(){
int y;
cout<<"Enter the year : ";
cin>>y;
if(y%4==0 && y%100!=0 || y%400==0){
    cout<<"Leap year ";
}
else{
    cout<<"Not a leap year ";
}
return 0;}