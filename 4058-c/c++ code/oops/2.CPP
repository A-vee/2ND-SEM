#include<iostream>
#include<string.h>
using namespace std;
class Dog{
  char name[20];
  char breed[20];
  public:
  Dog(char a[],char b[]){
    strcpy(name,a);
    strcpy(breed,b);
  }
  void Display(){
    cout<<"Name and breed of the dog : "<<name<<" "<<breed<<endl;
  }
  void setter(){
    cout<<"Enter the new name : ";
    cin>>name;
    cout<<"Enter the new breed : ";
    cin>>breed;
  }
};
int main(){
  Dog d1("Ron","Bulldog"),d2("Tom","Rottweiler");
  cout<<"Using constructor : "<<endl;
  d1.Display();
  d2.Display();
  d1.setter();
  d2.setter();
  cout<<"Updated values using setter : "<<endl;
  d1.Display();
  d2.Display();
  return 0;}