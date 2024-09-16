        #include <iostream>
        #include <string>
        
        class Example {
        private:
            int a;
            std::string b;
        
        public:
            Example() : a(0), b("default") {}
        
            void display() {
                std::cout << "a: " << a << ", b: " << b << std::endl;
            }
        };
        
        int main() {
            Example obj;
            obj.display();
        
            return 0;
        }