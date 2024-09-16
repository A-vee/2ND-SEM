/*1. Write a C++ program to create a new text file and write some text into it. */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    fstream f1;
    string ch;
    f1.open("Newfile",ios::out);
    cout<<"Enter the data for file : ";
    getline(cin,ch);
    f1<<ch;
    cout<<"File created .";
    f1.close();
    return 0;
}