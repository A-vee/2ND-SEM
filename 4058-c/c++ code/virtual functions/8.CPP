#include <iostream>


class Person {
public:
  
    virtual void eat() const = 0;
    virtual void exercise() const = 0;
};


class Athlete : public Person {
public:
 
    void eat() const override {
        std::cout << "Athlete eats a balanced diet to maintain energy levels." << std::endl;
    }

 
    void exercise() const override {
        std::cout << "Athlete engages in rigorous training sessions regularly." << std::endl;
    }
};


class LazyPerson : public Person {
public:
  
    void eat() const override {
        std::cout << "Lazy person eats whatever is convenient, often unhealthy food." << std::endl;
    }

    
    void exercise() const override {
        std::cout << "Lazy person avoids physical activity and prefers sedentary lifestyle." << std::endl;
    }
};


int main() {
   
    Athlete athlete;
    std::cout << "Athlete:" << std::endl;
    athlete.eat();
    athlete.exercise();

    std::cout << std::endl;

  
    LazyPerson lazyPerson;
    std::cout << "Lazy Person:" << std::endl;
    lazyPerson.eat();
    lazyPerson.exercise();

    return 0;
}
