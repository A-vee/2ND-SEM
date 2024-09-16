        #include <iostream>
        #include <string>
        
        class AreaCalculator {
        public:
            double calculateArea(double radius) {
                return 3.14 * radius * radius; // Area of circle
            }
        
            double calculateArea(double length, double width) {
                return length * width; // Area of rectangle
            }
        };
        
        int main() {
            AreaCalculator calculator;
        
            double radius, length, width;
            std::cout << "Enter radius of circle: ";
            std::cin >> radius;
            std::cout << "Area of circle: " << calculator.calculateArea(radius) << std::endl;
        
            std::cout << "Enter length of rectangle: ";
            std::cin >> length;
            std::cout << "Enter width of rectangle: ";
            std::cin >> width;
            std::cout << "Area of rectangle: " << calculator.calculateArea(length, width) << std::endl;
        
            return 0;
        }