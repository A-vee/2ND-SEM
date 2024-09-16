#include<iostream>
#include<string>
using namespace std;
string midch(string st){
    int l=st.length();
    if((l&1)==1){ 
    string mi="";  
    mi+=st[l/2];     
    return mi;
    }
    else{
        string mi="";
        mi=mi+st[l/2-1]+st[l/2];
        return mi; 
    }
    }
int main(){
    cout<<"Enter the string : ";
    string s;
    cin>>s;
    cout<<"Middle character of a string : "<<midch(s); 
    return 0;}
