#include<iostream>
#include<string>
using namespace std;
int main(){
    int d,p=1,temp;
    string st="";
    cout<<"Enter the decimal number : ";
    cin>>d;
    while(d!=0){
       temp=d%16;
       if(temp>9){
        if (temp==10){
            st=st+'A';
        }
        else if (temp==11){
            st=st+'B';
        }
        else if (temp==12){
            st=st+'C';
        }
        else if (temp==13){
            st=st+'D';
        }
        else if (temp==14){
            st=st+'E';
        }
        else{
            st=st+'F';
        }
       }
       else{
        st=st+(char)(temp+'0');
       }
       d=d/16;
    }
    int l=st.length();
    char ch;
    for(int i=0;i<l/2;i++){
        ch=st[i];
        st[i]=st[l-i-1];
        st[l-i-1]=ch;
    }
    cout<<"Hexadecimal value of decimal : "<<st;
    return 0;}
