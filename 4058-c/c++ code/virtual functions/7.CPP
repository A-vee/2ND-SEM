#include <iostream>


class Vehicle {
public:
    virtual void startEngine() const = 0;
    virtual void stopEngine() const = 0;
};


class Car : public Vehicle {
public:
    void startEngine() const override {
        std::cout << "Car engine started." << std::endl;
    }

    void stopEngine() const override {
        std::cout << "Car engine stopped." << std::endl;
    }
};

class Motorcycle : public Vehicle {
public:
   
    void startEngine() const override {
        std::cout << "Motorcycle engine started." << std::endl;
    }

    void stopEngine() const override {
        std::cout << "Motorcycle engine stopped." << std::endl;
    }
};


int main() {

    Car car;
    std::cout << "Car:" << std::endl;
    car.startEngine();
    car.stopEngine();

    std::cout << std::endl;


    Motorcycle motorcycle;
    std::cout << "Motorcycle:" << std::endl;
    motorcycle.startEngine();
    motorcycle.stopEngine();

    return 0;
}
