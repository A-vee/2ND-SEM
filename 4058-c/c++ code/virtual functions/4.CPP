#include <iostream>


class Animal {
public:

    virtual void eat() const = 0;
    virtual void sleep() const = 0;
};


class Lion : public Animal {
public:
    
    void eat() const override {
        std::cout << "Lion eats meat." << std::endl;
    }

   
    void sleep() const override {
        std::cout << "Lion sleeps during the day." << std::endl;
    }
};

class Tiger : public Animal {
public:
 
    void eat() const override {
        std::cout << "Tiger eats meat and sometimes fish." << std::endl;
    }

    
    void sleep() const override {
        std::cout << "Tiger sleeps in a sheltered area." << std::endl;
    }
};

class Deer : public Animal {
public:

    void eat() const override {
        std::cout << "Deer eats grass and leaves." << std::endl;
    }

    void sleep() const override {
        std::cout << "Deer sleeps at night and is active during the day." << std::endl;
    }
};


int main() {
    Lion lion;
    Tiger tiger;
    Deer deer;

    std::cout << "Lion: ";
    lion.eat();
    lion.sleep();

    std::cout << "\nTiger: ";
    tiger.eat();
    tiger.sleep();

    std::cout << "\nDeer: ";
    deer.eat();
    deer.sleep();

    return 0;
}
