#include<iostream>
#include<string>
using namespace std;
int roman(char m){
    char rom[]="MDCLXVI";
    for(int i=0;i<7;i++){
        if(m==rom[0]){
            return 1000;
        }
        else if(m==rom[1]){
            return 500;
        }
        else if(m==rom[2]){
            return 100;
        }
        else if(m==rom[3]){
            return 50;
        }
        else if(m==rom[4]){
            return 10;
        }
        else if(m==rom[5]){
            return 5;
        }
        else if(m==rom[6]){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
string st;
int n=0;
cout<<"Enter the roman number in capital : ";
cin>>st;
for(int i=0;i<st.length();i++){
    int temp=roman(st[i]);
    if(temp<roman(st[i+1])){
           n=n-temp;
    }
    else{
        n=n+temp;
    }
}
cout<<"Integer value of the roman number : "<<n;
return 0;}