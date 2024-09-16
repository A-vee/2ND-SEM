#include<iostream>
using namespace std;
int main(){
int h,temp,g,s;
cout<<"Enter the times you want input integers: ";
cin>>h;
cout<<"Enter the integers : ";
cin>>temp;
g=temp;
s=temp;
for(int i=0;i<h-1;i++){
    cin>>temp;
    if(g<temp){
       g=temp;
    }
    if(s>temp){
        s=temp;
    }
}
cout<<"Largest Number entered : "<<g<<endl;
cout<<"Smallest Number entered : "<<s;
return 0;}