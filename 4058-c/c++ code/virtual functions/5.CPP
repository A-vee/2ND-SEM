#include <iostream>
#include <string>


class Employee {
protected:
    std::string name;
    int id;

public:
   
    Employee(const std::string& name, int id) : name(name), id(id) {}

    
    virtual double calculateSalary() const = 0;
    virtual void displayInfo() const = 0;
};


class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:

    Manager(const std::string& name, int id, double baseSalary, double bonus)
        : Employee(name, id), baseSalary(baseSalary), bonus(bonus) {}

    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    void displayInfo() const override {
        std::cout << "Manager Name: " << name << std::endl;
        std::cout << "Manager ID: " << id << std::endl;
        std::cout << "Manager Salary: $" << calculateSalary() << std::endl;
    }
};


class Programmer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:

    Programmer(const std::string& name, int id, double hourlyRate, int hoursWorked)
        : Employee(name, id), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}


    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }

    void displayInfo() const override {
        std::cout << "Programmer Name: " << name << std::endl;
        std::cout << "Programmer ID: " << id << std::endl;
        std::cout << "Programmer Salary: $" << calculateSalary() << std::endl;
    }
};

int main() {

    Manager manager("John Doe", 1001, 5000, 1000);
    manager.displayInfo();

    std::cout << std::endl;

    Programmer programmer("Jane Smith", 2001, 50, 160);
    programmer.displayInfo();

    return 0;
}
