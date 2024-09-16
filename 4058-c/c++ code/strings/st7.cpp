#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    cin>>str;
    
    int i=0;
    int j=str.length()-1;
    
    while(i<j){
        if(str[i] != str[j]){
            cout<<str<<" is not a palindrome string."<<endl;
            return 0;
        }
        i++;
        j--;
    }
     cout<<str<<" is a palindrome string."<<endl;
    return 0;
}
