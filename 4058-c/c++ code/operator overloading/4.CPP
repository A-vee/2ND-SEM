#include<iostream>
using namespace std;
class String{
  char s[100];
  public:
  String(char ch[]){
     int i=0;
     while(ch[i]!='\0'){
        s[i]=ch[i];
        i++;
     }
     s[i]='\0';
  }
  String(){
    s[0]='\0';
  }
  String operator +(String &st){
    String temp;
    int i=0;
     while(s[i]!='\0'){
        temp.s[i]=s[i];
        i++;
     }
     int j=0;
     while(st.s[j]!='\0'){
        temp.s[i]=st.s[j];
        i++;
        j++;
     }
     temp.s[i]='\0';
     return temp;
  }
  void display(){
    cout<<s<<endl;
  }
};
int main(){
  String s1("HII"),s2("HELLO"),s3;
  s3=s1+s2;
  cout<<"Strings : "<<endl;
  s1.display();
  s2.display();
  s3=s1+s2;
  cout<<"Concatenate of two strings by overloading '+' operator : ";
  s3.display();
  return 0;}
