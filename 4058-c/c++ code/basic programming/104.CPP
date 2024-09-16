#include<iostream>
using namespace std;
int main(){
   int c=0;
   cout<<"Prime numbers between 1 to 20 : "<<endl;
   for(int i=1;i<21;i++){
    c=0;
    for(int j=2;j<i;j++){
       if(i%j==0){
          c=1;        
       }
    }
    if(c==0){
        cout<<i<<endl;
    }
   }
   return 0;}