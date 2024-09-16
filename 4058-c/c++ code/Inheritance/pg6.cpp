/* 6. Write a C++ program to create a class called Animal with a method named move(). Create a derived class called Cheetah that overrides the move() method to run. */
#include<iostream>
using namespace std;

class Animal 
{
	public:
	    void move() 
		{
	        cout << "Animal moves" << endl;
	    }
};

class Cheetah : public Animal 
{
	public:  
	    void move()  
		{
	        cout << "Cheetah runs !!" << endl;
	    }
};

int main() 
{
    Cheetah cheeta;
    cheeta.move(); 
}

/*
Cheetah runs !!
*/
