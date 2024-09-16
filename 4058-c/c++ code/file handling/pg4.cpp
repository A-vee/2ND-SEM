// 4. Write a C++ program to count the number of words in a text file.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f1;
    string ch;
    int c=0;
    f1.open("Newfile",ios::in);
    while(!f1.eof()){
    f1>>ch;
    c++;
    }
  cout<<"No of words in file : "<<c;
  f1.close();
  return 0;
}