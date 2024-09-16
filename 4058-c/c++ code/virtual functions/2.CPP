#include <iostream>
#include <cmath>


class Shape {
public:
  
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};


class Circle : public Shape {
private:
    double radius;

public:

    Circle(double r) : radius(r) {}

 
    double calculateArea() const override {
        return M_PI * radius * radius;
    }


    double calculatePerimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

public:

    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

   
    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    
    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

// Main function
int main() {
    // Create a circle with radius 5
    Circle circle(5);
    std::cout << "Circle: Area = " << circle.calculateArea() << ", Perimeter = " << circle.calculatePerimeter() << std::endl;

    // Create a triangle with sides 3, 4, and 5
    Triangle triangle(3, 4, 5);
    std::cout << "Triangle: Area = " << triangle.calculateArea() << ", Perimeter = " << triangle.calculatePerimeter() << std::endl;

    return 0;
}