#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    cin>>str;

    int count=0;

    for(int i=0; str[i] != '\0'; i++){
        if(ispunct(str[i])){
            count+=1;
        }
    }
    
    cout<<"The total number of punctuation character exits exists in the string is: "<<count<<endl;
    return 0;
}
