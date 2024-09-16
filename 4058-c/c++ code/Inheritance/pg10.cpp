/* 10. Write a C++ program that creates a class hierarchy for employees of a company. The base class should be Employee, with derived classes Manager, Developer, and Programmer. Each derived class should have properties such as name, address, salary, and job title. Implement methods for calculating bonuses, generating performance reports, and managing projects. */

#include<iostream>
#include<cstring>

using namespace std;

class Employee
{

private:

public:

    void calculatingBonus(){
        int hour ,salary,bonus,extra;
        cout<<"Enter your salary : ";
        cin>>salary;
        cout<<"Enter no. of your extra working hours in last month : ";
        cin>>hour;

        if (hour>210)
        {
            extra = 10*salary/100;
            bonus = salary+extra;
           cout<<"you got 10% bonus of your salary for the extra work, the bonus you got is : "<<bonus<<endl;
           
        }
        else {
            cout<<"you hven't work that much so no extra bonus " <<endl;
        }

        
    }
    void performanceReports(){

        int pj;
        cout<<"Enter no. of projects you submit : ";
        cin>>pj;
        if (pj>100)
        {
            cout<<"You got A perfomance level "<<endl;
        }
        else if (pj>50)
        {
            cout<<"You got B perfomance level "<<endl;
        }
        else  
        {
            cout<<"You got C perfomance level "<<endl;
        }
        

    }
    void managingProjects(){
        char Jobtit[20];

    cout << "Enter your Job title (choose from the below options): " << endl;
    cout << "1. CEO 2. HR 3. Employee: ";
    cin >> Jobtit;

    if (strcmp(Jobtit, "CEO") == 0) {
        cout << "You have to attend meetings." << endl;
    } else if (strcmp(Jobtit, "HR") == 0) {
        cout << "You have to manage 12 projects." << endl;
    } else if (strcmp(Jobtit, "Employee") == 0) {
        cout << "You have to manage 70 projects." << endl;
    } else {
        cout << "Invalid job title." << endl;
    }
    }

};

class Manager:public Employee
{
        private:

        char name[20];
        char address[30];
        int salary;
        char jobTitle[20];

        public :
        void info (){
            cout<<"Enter your name : "<<endl;
            cin>>name;
            cout<<"Enter your address : "<<endl;
            cin>>address;
            cout<<"Enter your salary : "<<endl;
            cin>>salary;
            cout<<"Enter your jobTitle : "<<endl;
            cin>>jobTitle;
        } 

        void display(){
            cout<<" The name of the employee is "<<name<<endl;
            cout<<" The address of the employee is "<<address<<endl;
            cout<<" The salary of the employee is "<<salary<<endl;
            cout<<" The jobTitle of the employee is "<<name<<endl;
        }


};

class Devloper:public Employee
{

        private:

        char name[20];
        char address[30];
        int salary;
        char jobTitle[20];

        public :
        void info (){
            cout<<"Enter your name : "<<endl;
            cin>>name;
            cout<<"Enter your address : "<<endl;
            cin>>address;
            cout<<"Enter your salary : "<<endl;
            cin>>salary;
            cout<<"Enter your jobTitle : "<<endl;
            cin>>jobTitle;
        } 

        void display(){
            cout<<" The name of the employee is "<<name<<endl;
            cout<<" The address of the employee is "<<address<<endl;
            cout<<" The salary of the employee is "<<salary<<endl;
            cout<<" The jobTitle of the employee is "<<name<<endl;
        }


};

class Programmer:public Employee
{

        private:

        char name[20];
        char address[30];
        int salary;
        char jobTitle[20];

        public :
        void info (){
            cout<<"Enter your name : "<<endl;
            cin>>name;
            cout<<"Enter your address : "<<endl;
            cin>>address;
            cout<<"Enter your salary : "<<endl;
            cin>>salary;
            cout<<"Enter your jobTitle : "<<endl;
            cin>>jobTitle;
        } 

        void display(){
            cout<<" The name of the employee is "<<name<<endl;
            cout<<" The address of the employee is "<<address<<endl;
            cout<<" The salary of the employee is "<<salary<<endl;
            cout<<" The jobTitle of the employee is "<<jobTitle<<endl;
        }


};

int main(){
    Programmer obj1;
    obj1.calculatingBonus();
    obj1.performanceReports();
    obj1.managingProjects();
    obj1.info();
    obj1.display();
}



/*

Output :- 

Enter your salary : 2000
Enter no. of your extra working hours in last month : 300
you got 10% bonus of your salary for the extra work, the bonus you got is : 2200
Enter no. of projects you submit : 120
You got A perfomance level 
Enter your Job title (choose from the below options): 
1. CEO 2. HR 3. Employee: CEO
You have to attend meetings.
Enter your name : 
ABCD
Enter your address : 
#213
Enter your salary :
250000
Enter your jobTitle :
WEB DEVLOPER
 The name of the employee is ABCD
 The address of the employee is #213
 The salary of the employee is 250000
 The jobTitle of the employee is Webdevloper

*/
