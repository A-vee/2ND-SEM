#include<iostream>
#include<string>
using namespace std;
class Book{
  string title;
  string author;
  string ISBN;
  int pi=34.5;
  public:
  void get(){
    cout<<"Enter the title : ";
    cin>>title;
    cout<<"Enter the author : ";
    cin>>author;
    cout<<"Enter the ISBN : ";
    cin>>ISBN;
  }
  string gettitle(){
    return title;
  }
  string getauthor(){
    return author;
  }  
  string getISBN(){
    return ISBN;
  } 
};
int i=0;
class collection{
  Book c[30];
  public:
  void add(){
    c[i].get();
    i++;
  }
  int find(string ch){
    int m=0;
    for(m=0;m<i;m++){
       if(ch==c[m].getISBN()){
          return m;
       }
    }
    return -1;    
  }
  void remove(string ch){
    int a=find(ch);
    if(a>=0){
    cout<<"Book with title "<<c[a].gettitle()<<" is removed from the collection ."<<endl;
    for(int j=a;j<i;j++){
      c[j]=c[j+1];
    }
    i--;}
    else{
      cout<<"No book found with this ISBN . "<<endl;
    }
  }
};
int main(){
  collection c1;
  c1.add();
  c1.add();
  string st;
  cout<<"Enter the ISBN of the book you want to remove : ";
  cin>>st;
  c1.remove(st);
}