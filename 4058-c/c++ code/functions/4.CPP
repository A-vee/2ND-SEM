#include<iostream>
using namespace std;
void twinp(){
    int tem=1,c=0;
    for(int i=2;i<101;i++){
        c=0;
        for(int j=2;j<i;j++){
           if(i%j==0){
               c=1;
               break;
           }
        }
       if(c==0){
         if ((i-tem)==2){
            cout<<tem<<","<<i<<endl;
        }
        tem=i;
       }
    }
    }
int main(){
    cout<<"Twin prime numbers less than 100 : "<<endl;
    twinp();
    return 0;}
