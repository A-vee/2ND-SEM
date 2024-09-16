#include<iostream>
using namespace std;
int main(){
   int s=0,c=0;
   for(int i=2;i<101;i++){
    c=0;
    for(int j=2;j<i;j++){
       if(i%j==0){
          c=1;        
       }
    }
    if(c==0){
        s=s+i;
    }
   }
   cout<<"Sum Of First 100 Prime No. : "<<s;
   return 0;}