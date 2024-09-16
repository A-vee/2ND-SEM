/*4. Write a C++ program to create a class called Employee with methods called work() and getSalary(). Create a derived class called HRManager that overrides the work() method and adds a new method called addEmployee(). */
#include <iostream>
using namespace std;

class Employee
{
	private:
	    int salary;
	    char name[10];
	public:
	    void work()
	    {
	        cout << "Enter name of employee : ";
	        cin>>name;
	    }
	
	    void getSalary()
	    {
	        cout << "Enter your salary : ";
	        cin>>salary;
	        cout<<"your salary is : "<<salary<<endl;
	    }
};

class HRManager :public Employee  
{
    private :
       char title[10];
    public :
        void work()
	    {
	        cout << " Enter your job title : "<<endl;
	        cin>>title;   
	    }
	    void addEmployee()
		{
	            cout<<"Employee numbers is 1200. ";
	    }

};

int main()
{
    HRManager obj;
    obj.getSalary();
    obj.work();
    obj.addEmployee();    
}

/*
Enter your salary : 50000
your salary is : 50000
 Enter your job title :
ceo
Employee numbers is 1200.
*/
