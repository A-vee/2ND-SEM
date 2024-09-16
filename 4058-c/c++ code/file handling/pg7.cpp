// 7. Write a C++ program to append new data to an existing text file. 

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f1,f2;
    string ch,fd,rp;
    f1.open("Newfile",ios::app);
    f1<<"Appending new data in Existing file."<<endl;
    f1.close();
}
