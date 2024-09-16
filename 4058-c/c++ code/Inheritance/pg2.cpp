/* 2. Write a C++ program to create a class called Vehicle with a method called drive(). Create a derived class called Car that overrides the drive() method to print "Repairing a car". */
#include <iostream>
using namespace std;

class Vhicle
{
public:
    void drive()
    {
        cout << "I drive BMW"<<endl;
    }
};

class Car :public Vhicle  
{
    public :
        void drive()
    {
        cout << "I drive Ferrari "<<endl;
    }
};

int main()
{
    Car obj1;
    obj1.drive();
}

/*
I drive Ferrari
*/
