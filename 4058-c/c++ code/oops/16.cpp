    #include <iostream>
    #include <cmath>
    class Shape {
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
    };
    
    class Rectangle : public Shape {
    private:
        double length, width;
    
    public:
        Rectangle(double length, double width) : length(length), width(width) {}
    
        double area() const override {
            return length * width;
        }
    
        double perimeter() const override {
            return 2 * (length + width);
        }
    };
    
    class Circle : public Shape {
    private:
        double radius;
    
    public:
        Circle(double radius) : radius(radius) {}
    
        double area() const override {
            return M_PI * radius * radius;
        }
    
        double perimeter() const override {
            return 2 * M_PI * radius;
        }
    };
    
    class Triangle : public Shape {
    private:
        double side1, side2, side3;
    
    public:
        Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}
    
        double area() const override {
            double s = (side1 + side2 + side3) / 2;
            return sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }
    
        double perimeter() const override {
            return side1 + side2 + side3;
        }
    };
    
    int main() {
        Rectangle rect(5, 3);
        std::cout << "Rectangle Area: " << rect.area() << ", Perimeter: " << rect.perimeter() << std::endl;
    
        Circle circle(4);
        std::cout << "Circle Area: " << circle.area() << ", Circumference: " << circle.perimeter() << std::endl;
    
        Triangle triangle(3, 4, 5);
        std::cout << "Triangle Area: " << triangle.area() << ", Perimeter: " << triangle.perimeter() << std::endl;
    
        return 0;
    }