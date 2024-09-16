#include<iostream>
using namespace std;
int main(){
float a,b,c;
cout<<"Enter three numbers A,B and C : ";
cin>>a>>b>>c;
if(a<b){
    if(a<c){
        cout<<"A is smallest";
    }
    else{
        cout<<"C is smallest";
    }
}
else if(c<b){
     cout<<"C is smallest ";
}
else if(b==a && b==c){
    cout<<"All three are equal ";
}
else{
    cout<<"B is smallest";
}
return 0;}