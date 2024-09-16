#include<iostream>
#include<string>
using namespace std;
int main(){
string st1="Hiii  hlo  hii hlo";
cout<<"String  : "<<st1<<endl;
char ch;
cout<<"Enter the character you want to remove from the string : ";
cin>>ch;
int len=st1.length();
for(int i=0;i<len;i++){ 
    if(st1[i]==ch){
        for(int j=i;j<len;j++){
        if(j==(len-1)){
            st1[j]='\0';
        }
        else{
        st1[j]=st1[j+1];
        }}
        break;
    }   
}
cout<<"String after removal of given character : "<<st1;
return 0;}