/*1. Write a C++ program to create a class called Animal with a method called makeSound(). Create a derived class called Cat that overrides the makeSound() method to bark. */
#include <iostream>
using namespace std;

class Animal
{
public:
    void makeSound()
    {
        cout << "Animal makes a sound "<<endl;
    }
};

class Cat :public Animal  
{
    private :
        /* data */
        public :
        void makeSound()
	    {
	        cout << "Cat makes a sound "<<endl;
	    }
};

int main()
{
    Cat cat;
    cat.makeSound();
}

/*
Cat makes a sound
*/
