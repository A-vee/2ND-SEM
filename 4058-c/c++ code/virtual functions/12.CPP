#include <iostream>


class Bird {
public:
    virtual void fly() const = 0;
    virtual void makeSound() const = 0;
};


class Eagle : public Bird {
public:
   
    void fly() const override {
        std::cout << "Eagle soars high in the sky." << std::endl;
    }

  
    void makeSound() const override {
        std::cout << "Eagle makes a piercing screech." << std::endl;
    }
};


class Hawk : public Bird {
public:
  
    void fly() const override {
        std::cout << "Hawk flies swiftly through the air." << std::endl;
    }

 
    void makeSound() const override {
        std::cout << "Hawk emits a high-pitched scream." << std::endl;
    }
};

int main() {

    Eagle eagle;
    std::cout << "Eagle:" << std::endl;
    eagle.fly();
    eagle.makeSound();

    std::cout << std::endl;


    Hawk hawk;
    std::cout << "Hawk:" << std::endl;
    hawk.fly();
    hawk.makeSound();

    return 0;
}
