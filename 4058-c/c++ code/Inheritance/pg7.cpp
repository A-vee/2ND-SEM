/* 7. Write a C++ program to create a class known as Person with methods called getFirstName() and getLastName(). Create a derived class called Employee that adds a new method named getEmployeeId() and overrides the getLastName() method to include the employee's job title. */
#include<iostream>
using namespace std;

class Person
{
	public:	
	    char fname[20];
	    char lname[20];
	    void getFirstName()
		{
	        cout<<"Enter your first name : ";
	        cin>>fname;
	    }
		void getLastName()
		{
	    cout<<"Enter your last name : ";
	    cin>>lname;
		}
};

class Employee :public Person
{
	private:
	   int employeeID;
	   int jbTitle;
	public:
	  void getEmployeeId()
	  {
	  	cout<<"Enter your employee ID : ";
		cin>>employeeID;
	  }
	 void getLastName()
	 {
	    cout<<"Enter your Job title : ";
	    cin>>jbTitle;
	 }
};

int main()
{
    Employee A;
    A.getFirstName();
    A.getEmployeeId();
    A.getLastName();
}

/*
Enter your first name : vipul
Enter your employee ID : 1234
Enter your Job title : ceo
*/
