// 2. Write a C++ program to open an existing text file and display its contents on the console.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f1;
    string ch;
    f1.open("Newfile",ios::in);
    while(!f1.eof()){
    getline(f1,ch);
  }
  cout<<"Data inside file : "<<endl<<ch;
  f1.close();
  return 0;
}