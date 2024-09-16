        #include <iostream>
        #include <vector>
        #include <string>
        
        class School {
        private:
            std::vector<std::string> a;
            std::vector<std::string> b;
            std::vector<std::string> c;
        
        public:
            void addStudent(const std::string& student) {
                a.push_back(student);
            }
        
            void removeStudent(const std::string& student) {
                for (auto it = a.begin(); it != a.end(); ++it) {
                    if (*it == student) {
                        a.erase(it);
                        break;
                    }
                }
            }
        
            void addTeacher(const std::string& teacher) {
                b.push_back(teacher);
            }
        
            void removeTeacher(const std::string& teacher) {
                for (auto it = b.begin(); it != b.end(); ++it) {
                    if (*it == teacher) {
                        b.erase(it);
                        break;
                    }
                }
            }
        
            void createClass(const std::string& className) {
                c.push_back(className);
            }
        
            void show() const {
                std::cout << "Students: ";
                for (const auto& student : a) {
                    std::cout << student << ", ";
                }
                std::cout << std::endl;
        
                std::cout << "Teachers: ";
                for (const auto& teacher : b) {
                    std::cout << teacher << ", ";
                }
                std::cout << std::endl;
        
                std::cout << "Classes: ";
                for (const auto& className : c) {
                    std::cout << className << ", ";
                }
                std::cout << std::endl;
            }
        };
        
        int main() {
            School school;
        
            school.addStudent("Student1");
            school.addStudent("Student2");
            school.addStudent("Student3");
        
            school.addTeacher("Teacher1");
            school.addTeacher("Teacher2");
        
            school.createClass("ClassA");
            school.createClass("ClassB");
        
            school.show();
        
            school.removeStudent("Student2");
            school.removeTeacher("Teacher1");
        
            school.show();
        
            return 0;
        }