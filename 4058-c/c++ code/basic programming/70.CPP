#include<iostream>
#include<string>
using namespace std;
int main(){
string st1="Hiii  hlo    hii hlo";
cout<<"String before trim : "<<st1<<endl;
int len=st1.length();
for(int i=0;i<len;i++){
    if(st1[i]==' '){
        for(int j=i;j<len;j++){
        st1[j]=st1[j+1];
        }
    }
    if(st1[i]==' '){
        i--;
    }
}
cout<<"String after trim : "<<st1;
return 0;}