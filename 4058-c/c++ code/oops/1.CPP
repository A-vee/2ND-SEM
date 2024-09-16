#include<iostream>
#include<string.h>
using namespace std;
class Person{
  char name[20];
  int age;
  public:
  Person(char a[],int n){
    strcpy(name,a);
    age=n;
  }
  void Display(){
    cout<<"Name and age of the person : "<<name<<" "<<age<<endl;
  }
};
int main(){
  Person p1("Raj",24),p2("Rohit",27);
  p1.Display();
  p2.Display();
  return 0;}
