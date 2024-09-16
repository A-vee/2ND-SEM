#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter String: "<<endl;
    cin>>str;
    
    int digit=1;
    for(int i=0; i<str.length(); ++i){
        if(!isdigit(str[i])){
            digit=0;
            break;
        }
    }
    
    if(digit){
        cout<<"The string contain only digits"<<endl;
    }
    else{
          cout<<"The string does not contain only digits"<<endl;
    }
    return 0;
}
