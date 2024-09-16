#include <iostream>
#include <cmath>


class Shape3D {
public:
    virtual double calculateVolume() const = 0;
    virtual double calculateSurfaceArea() const = 0;
};

class Sphere : public Shape3D {
private:
    double radius;

public:

    Sphere(double r) : radius(r) {}

    double calculateVolume() const override {
        return (4.0 / 3.0) * M_PI * std::pow(radius, 3);
    }

    
    double calculateSurfaceArea() const override {
        return 4 * M_PI * std::pow(radius, 2);
    }
};


class Cube : public Shape3D {
private:
    double side;

public:
 
    Cube(double s) : side(s) {}

    double calculateVolume() const override {
        return std::pow(side, 3);
    }

  
    double calculateSurfaceArea() const override {
        return 6 * std::pow(side, 2);
    }
};


int main() {
    
    Sphere sphere(5);
    std::cout << "Sphere: Volume = " << sphere.calculateVolume() << ", Surface Area = " << sphere.calculateSurfaceArea() << std::endl;

    Cube cube(4);
    std::cout << "Cube: Volume = " << cube.calculateVolume() << ", Surface Area = " << cube.calculateSurfaceArea() << std::endl;

    return 0;
}
