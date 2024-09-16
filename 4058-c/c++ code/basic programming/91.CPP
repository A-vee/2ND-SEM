#include<iostream>
#include<math.h>
using namespace std;
int main(){
int len,temp=0,a;
cout<<"Armstrong numbers between 1 to 600 : "<<endl;
for(int i=1;i<601;i++){
    a=0;
    len=0;
    temp=i;
    while(temp!=0){
        len++;
        temp=temp/10;
    }
    temp=i;
    while(temp!=0){
       int inte;
       inte=pow(temp%10,len);
       a=a+inte;
       temp=temp/10;
    }
    if(a==i){
        cout<<i<<endl;
    }
  
}
return 0;}