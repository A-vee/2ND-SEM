#include <iostream>
#include <cmath>

// Abstract class GeometricShape
class GeometricShape {
public:
    // Abstract methods
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

// Derived class Triangle
class Triangle : public GeometricShape {
private:
    double side1, side2, side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Implementation of area method for Triangle using Heron's formula
    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Implementation of perimeter method for Triangle
    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

// Derived class Square
class Square : public GeometricShape {
private:
    double side;

public:
    // Constructor
    Square(double s) : side(s) {}

    // Implementation of area method for Square
    double area() const override {
        return side * side;
    }

    // Implementation of perimeter method for Square
    double perimeter() const override {
        return 4 * side;
    }
};

// Main function
int main() {
    // Create a Triangle object with sides 3, 4, and 5
    Triangle triangle(3, 4, 5);
    std::cout << "Triangle: Area = " << triangle.area() << ", Perimeter = " << triangle.perimeter() << std::endl;

    // Create a Square object with side 4
    Square square(4);
    std::cout << "Square: Area = " << square.area() << ", Perimeter = " << square.perimeter() << std::endl;

    return 0;
}
