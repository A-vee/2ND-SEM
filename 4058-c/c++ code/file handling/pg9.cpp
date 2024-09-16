// 9. Write a C++ program to merge multiple text files into a single file.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f1,f2,f3;
    string l[10],st;
    f1.open("Newfile",ios::in);
    f2.open("Newfile2",ios::in);
    f3.open("Mergeoff",ios::out);
    while(!f1.eof()){
    getline(f1,st);
        f3<<st<<endl;
      }
   f1.close();
   f3.close();
   f3.open("Mergeoff",ios::app);
   while(!f2.eof()){
     getline(f2,st);
     f3<<st<<endl;
      }
      cout<<"Data merged in one file.";
    f2.close();
    f3.close();
  return 0;
}