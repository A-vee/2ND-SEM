// 13. Write a C++ program to decrypt the contents of a text file encrypted using the above algorithm.

#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
   
    fstream f1,f2;
     f1.open("encryptf",ios::in);
     f2.open("Newfile",ios::out);
    char ch;
    while(f1.get(ch)){
        if(ch=='\n' || ch==' '){
            f2<<ch;
        }
      else{
        ch=ch-7;
        f2<<ch;
        }
    }
    f1.close();
    f2.close();
}