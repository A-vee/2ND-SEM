#include<iostream>
using namespace std;
class Time{
  int hour;
  int min;
  public:
  Time(int a,int b){
     hour=a;
     min=b;
     simp();
  }
  friend ostream& operator <<(ostream &o,Time &t);
  void simp(){
    hour=hour+(min/60);
    min=min%60;
  }
};
ostream& operator <<(ostream &o,Time &t){
   o<<t.hour<<":"<<t.min<<endl;
}
int main(){
  Time t1(10,90);
  cout<<"Displaying Time in HH:MM format by overloading '<<' : "<<t1;
  return 0;}
