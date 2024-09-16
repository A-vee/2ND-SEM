#include<iostream>
#include<string>
using namespace std;
class Account{
  string user;
  string Acno;
  int pin;
  long long money;
  public:
  Account(){
    money=0;
  }
  void get(){
    cout<<"Enter the Account holder name : ";
    cin>>user;
    cout<<"Enter the Account No. : ";
    cin>>Acno;
    cout<<"Enter the 4 digit pin :  ";
    cin>>pin;}
    string pruser(){
      return user;
    }
    string prAcno(){
      return Acno;
    }
    int prpin(){
      return pin;
    }
    long long prmoney(){
      return money;
    }
    void setmoney(long long n){
      money=n;
    }
};
int i=0;
class Bank{
  Account a[50];
  public:
  void add(){
    a[i].get();
    i++;
  }
  int find(string acc,int p){
      int m=0;
      for(m;m<i;m++){
        if(acc==a[m].prAcno() && p==a[m].prpin()){
           return m;
        }
      }
      return -1;
  }
  void mw(){
    string ac;int pin;
    getinf(ac,pin);
    int c=find(ac,pin);
    if(c>=0){     
    cout<<"Enter the amount of money to withdraw : ";
    int n;
    cin>>n;
     if((a[c].prmoney())>=n){
     a[c].setmoney(a[c].prmoney()-n);
     cout<<"Money after withdrawl : "<<a[c].prmoney()<<endl;
    }
    else{
      cout<<"Withdrwal money is not acceptable. "<<endl;
    }}
    else{
      cout<<"No valid account found . "<<endl;
    }
  }
  void md(){
    string ac;int pin;
    getinf(ac,pin);
    int c=find(ac,pin);
    if(c>=0){     
     cout<<"Enter the amount of money to deposit : ";
     int n;
     cin>>n;
     a[c].setmoney(a[c].prmoney()+n);
     cout<<"Money after deposit : "<<a[c].prmoney()<<endl;}
    else{
      cout<<"No valid account found . "<<endl;
    }
  }
  void getinf(string &c,int &p){
    cout<<"Account no. : ";
    cin>>c;
    cout<<"Enter Pin : ";
    cin>>p;
  }
  void remove(){
    string ac;int pin;
    getinf(ac,pin);
    int c=find(ac,pin);
    if(c>=0){
    cout<<"Account with holder name "<<a[c].pruser()<<" is removed from the Bank ."<<endl;
    for(int j=c;j<i+1;j++){
      a[j]=a[j+1];
    }
    i--;}
    else{
      cout<<"No valid account found . "<<endl;
    }
  }
};
int main(){
  Bank b1;
  cout<<"Adding account : "<<endl;
  b1.add();
  cout<<"Money deposit : "<<endl;
  b1.md();
  cout<<"Money withdrawl : "<<endl;
  b1.mw();
  cout<<"Adding account : "<<endl;
  b1.add();
  cout<<"Removing account : "<<endl;
  b1.remove();
  return 0;
}