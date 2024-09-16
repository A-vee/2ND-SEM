// 3. Write a C++ program to count the number of lines in a text file. 

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f1;
    char ch;
    int c=0;
    f1.open("Newfile",ios::in);
    while(!f1.eof()){
    f1.get(ch);
    if(ch=='\n'){
        c++;
    }
  }
  cout<<"No of lines in file : "<<c+1;
  f1.close();
  return 0;
}
