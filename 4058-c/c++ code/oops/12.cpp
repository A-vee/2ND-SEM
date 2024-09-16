#include <iostream>
        #include <string>
        #include <ctime>
        
        class Airplane {
        private:
            std::string a;
            std::string b;
            time_t c;
        
        public:
            Airplane(const std::string& a, const std::string& b, time_t c) : a(a), b(b), c(c) {}
        
            void d() const {
                time_t currentTime = time(nullptr);
                if (currentTime > c) {
                    std::cout << "Delayed" << std::endl;
                } else {
                    std::cout << "On time" << std::endl;
                }
            }
        
            void disp() const {
                std::cout << "Flight " << a << " to " << b << ", Departure time: " << c << ", Status: ";
                d();
            }
        };
        
        int main() {
            Airplane airplane("ABC123", "New York", time(nullptr) + 3600);
        
            airplane.disp();
        
            return 0;
        }