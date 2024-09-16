#include<iostream>
#include<cctype>
using namespace std;
int main(){
    cout<<"Odd Numbers between 1 to 20 : "<<endl;
    for(int i=1;i<21;i++){
      if (i&1==1){
        cout<<i<<endl;
    }
    }
   return 0;}