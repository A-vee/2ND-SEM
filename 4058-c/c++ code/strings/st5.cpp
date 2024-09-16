#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    string str;
    char ch;

    cout<<"Enter string: ";
    cin>>str;
    cout<<"Enter the character which you want to remove: ";
    cin>>ch;

    string result;
    for(int i=0; str[i] != '\0'; i++){
        char r=str[i];
        if(r != ch){
            result+=r;
        }
    }
    
    cout<<"String after removing "<<ch<<" : "<<result<<endl;
    return 0;
}
