#include<iostream>
#include<string>
using namespace std;
class Employee{
  string name;
  string jtitle;
  long long salary;
  public:
  void get(){
    cout<<"Enter the name of Employee : ";
    cin>>name;
    cout<<"Enter the job title : ";
    cin>>jtitle;
    cout<<"Enter the monthly salary : ";
    cin>>salary;
  }
  void ansalary(){
    cout<<"Annual Salary : "<<12*salary<<endl;
  }
  void updatesalary(){
    cout<<"Enter the updated salary of the Employee : ";
    cin>>salary;
  }
};
int main(){
  Employee e1;
  e1.get();
  e1.ansalary();
  e1.updatesalary();
  return 0;
}