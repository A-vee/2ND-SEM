#include <iostream>

// Abstract class Shape2D
class Shape2D {
public:
    // Abstract methods
    virtual void draw() const = 0;
    virtual void resize(double factor) = 0;
};

// Derived class Rectangle
class Rectangle : public Shape2D {
private:
    double width;
    double height;

public:
    // Constructor
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implementation of draw method for Rectangle
    void draw() const override {
        std::cout << "Drawing Rectangle with width: " << width << " and height: " << height << std::endl;
    }

    // Implementation of resize method for Rectangle
    void resize(double factor) override {
        width *= factor;
        height *= factor;
        std::cout << "Resizing Rectangle by factor: " << factor << std::endl;
    }
};

// Derived class Circle
class Circle : public Shape2D {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Implementation of draw method for Circle
    void draw() const override {
        std::cout << "Drawing Circle with radius: " << radius << std::endl;
    }

    // Implementation of resize method for Circle
    void resize(double factor) override {
        radius *= factor;
        std::cout << "Resizing Circle by factor: " << factor << std::endl;
    }
};

// Main function
int main() {
    // Create a Rectangle object
    Rectangle rectangle(5, 3);
    std::cout << "Rectangle:" << std::endl;
    rectangle.draw();
    rectangle.resize(1.5);
    rectangle.draw();

    std::cout << std::endl;

    // Create a Circle object
    Circle circle(4);
    std::cout << "Circle:" << std::endl;
    circle.draw();
    circle.resize(2);
    circle.draw();

    return 0;
}

