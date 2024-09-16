//  12. Write a C++ program to encrypt the contents of a text file using a simple encryption algorithm. 

#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    /*Encryption algorithm :- shifting character by 7 ascii numbers to the right */
    fstream f1,f2;
    f1.open("NewFile",ios::in);
    f2.open("encryptf",ios::out);
    char ch;
    while(f1.get(ch)){
        if(isalpha(ch)){        
        ch=ch+7;
        f2<<ch;}
        else{
            f2<<ch;
        }
    }
    cout<<"File encrypted";
    f1.close();
    f2.close();
}