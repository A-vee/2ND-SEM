#include<iostream>
using namespace std;
int main(){
int h,temp,n=0,p=0,z=0;
cout<<"Enter the times you want input integers: ";
cin>>h;
cout<<"Enter the integers : ";
for(int i=0;i<h;i++){
    cin>>temp;
    if(temp>0){
       p++;
    }
    else if(temp<0){
        n++;
    }
    else{
        z++;
    }
}
cout<<"Number of Positive integer given : "<<p<<endl;
cout<<"Number of Negative integer given : "<<n<<endl;
cout<<"Number of Zeroes given : "<<z<<endl;
return 0;}