// 6. Write a C++ program to find and replace a specific word in a text file.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f1,f2;
    string ch,fd,rp;
    f1.open("Newfile",ios::in);
    f2.open("cpNewfile",ios::out);
    cout<<"Enter the word to find : ";
    cin>>fd;
    cout<<"Enter the word to replace : ";
    cin>>rp;
    while(!f1.eof()){
    f1>>ch;
    if(ch==fd){
        f2<<rp<<" ";
    }
    else{
        f2<<ch<<" ";
    }
    }
    f1.close();
    f2.close();
    f1.open("Newfile",ios::out);
    f2.open("cpNewfile",ios::in);
    while(!f2.eof()){
    getline(f2,ch);
    f1<<ch;}
    return 0;
    f1.close();
    f2.close();
}