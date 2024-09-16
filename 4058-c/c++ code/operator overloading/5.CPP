#include<iostream>
using namespace std;
class Date{
  int month;
  int day;
  int year;
  public:
  Date(int a,int b,int c){
    day=a;
    month=b;
    year=c;
    simp();
  }
  int operator <(Date &d){
     if(year<d.year){
       return true;
     }
     else{
      return false;
     }
     if(month<d.month){
        return true;
     }
     else{
      return false;
     }
     if(day<d.day){
      return true;
     }
     else{
      return false;
     }
  }
  void display(){
    cout<<day<<"/"<<month<<"/"<<year<<endl;
  }
  void simp(){
    day=day%31;
    month=month+(day/12);
    year=year+(month/12);
    month=month%12;
  }
};
int main(){
  Date d1(12,24,2014),d2(52,5,2020);
  cout<<"Dates : "<<endl;
  d1.display();
  d2.display();
  cout<<"Comparison of dates by overloading '<' operator (1:True 0:False) :"<<(d1<d2);
  return 0;}
