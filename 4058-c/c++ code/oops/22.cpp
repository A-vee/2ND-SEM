        #include <iostream>
        #include <string>
        
        class Person {
        private:
            std::string name;
            int age;
        
        public:
            Person(std::string n, int a) : name(n), age(a) {}
        
            Person(const Person& other) {
                name = other.name;
                age = other.age;
            }
        
            void display() {
                std::cout << "Name: " << name << std::endl;
                std::cout << "Age: " << age << std::endl;
            }
        };
        
        int main() {
            Person person1("Alice", 30);
            Person person2 = person1;
            person1.display();
            std::cout << std::endl;
            person2.display();
            return 0;
        }