        #include <iostream>
        #include <string>
        
        class Example {
        private:
            int a;
            std::string b;
        
        public:
            Example(int a, const std::string& b) : a(a), b(b) {}
        
            // Copy constructor
            Example(const Example& other) : a(other.a), b(other.b) {}
        
            void display() {
                std::cout << "a: " << a << ", b: " << b << std::endl;
            }
        };
        
        int main() {
            Example obj1(10, "example");
            obj1.display();
        
            Example obj2 = obj1; // Copy constructor invoked
            obj2.display();
        
            return 0;
        }