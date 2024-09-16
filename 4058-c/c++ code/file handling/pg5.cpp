// 5. Write a C++ program to copy the contents of one text file to another.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f1,f2;
    string ch;
    f1.open("Newfile",ios::in);
    f2.open("CpNewfile",ios::out);
    while(!f1.eof()){
    getline(f1,ch);
    f2<<ch;
    f2<<endl;
    }
    cout<<"file copied .";
   f1.close();
   f2.close();
   return 0;
}
