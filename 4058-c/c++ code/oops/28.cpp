        #include <iostream>
        
        class Circle {
        private:
            double radius;
        
        public:
            void setRadius(double newRadius) {
                radius = newRadius;
            }
        
            double getRadius() const {
                return radius;
            }
        
            double calculateArea() const {
                return 3.14 * radius * radius; // Area of circle = π * r^2
            }
        
            double calculatePerimeter() const {
                return 2 * 3.14 * radius; // Perimeter of circle = 2 * π * r
            }
        };
        
        int main() {
            Circle circle;
        
            circle.setRadius(5.0);
        
            std::cout << "Circle Radius: " << circle.getRadius() << std::endl;
            std::cout << "Circle Area: " << circle.calculateArea() << std::endl;
            std::cout << "Circle Perimeter: " << circle.calculatePerimeter() << std::endl;
        
            return 0;
        }