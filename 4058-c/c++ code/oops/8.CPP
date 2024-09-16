#include <iostream>
        #include <string>
        class TrafficLight {
        private:
            std::string color;
            int duration;
        
        public:
            TrafficLight() : color("red"), duration(10) {}
        
            void changeColor(const std::string& newColor) {
                color = newColor;
            }
        
            bool isRed() const {
                return color == "red";
            }
        
            bool isGreen() const {
                return color == "green";
            }
        };
        
        int main() {
            TrafficLight trafficLight;
        
            std::cout << "Initial color: " << (trafficLight.isRed() ? "red" : "green") << std::endl;
        
            trafficLight.changeColor("green");
        
            std::cout << "Updated color: " << (trafficLight.isRed() ? "red" : "green") << std::endl;
        
            return 0;
        }