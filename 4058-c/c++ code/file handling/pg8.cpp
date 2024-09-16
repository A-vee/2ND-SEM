// 8. Write a C++ program to sort the lines of a text file in alphabetical order.

#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    fstream f1;
    string l[10],st;
    f1.open("Newfile",ios::in);
    int i=0;
    while(!f1.eof()){
    getline(f1,st);
    l[i]=st;
    i++;
  }
  sort(l,l+i);
  cout<<"Lines sorted alphabetical of file : "<<endl;
  for(int j=0;j<i;j++){
    cout<<l[j]<<endl;
  }
  f1.close();
  return 0;
}
