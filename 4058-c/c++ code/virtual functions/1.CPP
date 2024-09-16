#include <iostream>


class Animal {
public:
    
    virtual void sound() const = 0;
};


class Lion : public Animal {
public:
   
    void sound() const override {
        std::cout << "Lion roars" << std::endl;
    }
};


class Tiger : public Animal {
public:
 
    void sound() const override {
        std::cout << "Tiger growls" << std::endl;
    }
};


int main() {
 
    Lion lion;
    Tiger tiger;

   
    std::cout << "Sound of Lion: ";
    lion.sound();

    std::cout << "Sound of Tiger: ";
    tiger.sound();

    return 0;
}