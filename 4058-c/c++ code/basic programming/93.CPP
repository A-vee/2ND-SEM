#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the no. of terms for series :  ";
cin>>n;
cout<<"Fibonacci series of "<<n<<" terms : "<<endl;
if(n<=1){
    if(n==0){
        cout<<0;
    }
    else{
        cout<<0<<endl<<1;
    }
}
else{
    int temp,x=0,y=1;
    cout<<0<<endl<<1<<endl;
    for(int i=2;i<n;i++){
        temp=x+y;
        x=y;
        y=temp;
        cout<<temp<<endl;
    }
}
return 0;}