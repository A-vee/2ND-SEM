#include<iostream>
using namespace std;
class money{
  int rup;
  int paise;
  public:
  money(int a,int b){
    rup=a;
    paise=b;
    simp();
  }
  money(){
    rup=0;
    paise=0;
  }
  money operator +(money &m){
    money temp;
    temp.rup=rup+m.rup;
    temp.paise=paise+m.paise;
    temp.simp();
    return temp;
  }
  void display(){
    cout<<rup<<"."<<paise<<endl;
  }
  void simp(){
    rup=rup+(paise/100);
    paise=paise%100;
  }
};
int main(){
  money m1(20,678),m2(230,32),m3;
  cout<<"Money : "<<endl;
  m1.display();
  m2.display();
  m3=m1+m2;
  cout<<"Addition of money by overloading '+' operator : ";
  m3.display();
  return 0;}
