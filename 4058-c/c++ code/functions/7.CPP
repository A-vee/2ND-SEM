#include<iostream>
#include<string>
using namespace std;
int voch(string st){
   int c=0;
   for(int i=0;i<st.length();i++){
      if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u'){
        c=0;
      }
      else{
        c=1;
        break;
      }
   }
   if(c==0){
    return true;
   }
   else{
    return false;
   }
}
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"All character of string are vowels (0:false and 1:True): "<<voch(s); 
    return 0;}
