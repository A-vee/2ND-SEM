        #include <iostream>
        #include <string>
        
        class Person {
        private:
            std::string name;
            int age;
            std::string country;
        
        public:
            void setName(const std::string& newName) {
                name = newName;
            }
        
            std::string getName() const {
                return name;
            }
        
            void setAge(int newAge) {
                age = newAge;
            }
        
            int getAge() const {
                return age;
            }
        
            void setCountry(const std::string& newCountry) {
                country = newCountry;
            }
        
            std::string getCountry() const {
                return country;
            }
        };
        
        int main() {
            Person person;
        
            person.setName("kailsah");
            person.setAge(19);
            person.setCountry("India");
        
            std::cout << "Name: " << person.getName() << std::endl;
            std::cout << "Age: " << person.getAge() << std::endl;
            std::cout << "Country: " << person.getCountry() << std::endl;
        
            return 0;
        }