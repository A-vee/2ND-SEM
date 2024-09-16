#include <iostream>
        #include <vector>
        #include <string>
        
        class Student {
        private:
            std::string name;
            int grade;
            std::vector<std::string> courses;
        
        public:
            Student(const std::string& name, int grade) : name(name), grade(grade) {}
        
            void addCourse(const std::string& course) {
                courses.push_back(course);
            }
        
            void removeCourse(const std::string& course) {
                for (auto it = courses.begin(); it != courses.end(); ++it) {
                    if (*it == course) {
                        courses.erase(it);
                        break;
                    }
                }
            }
        
            void printCourses() const {
                std::cout << "Courses: ";
                for (const auto& course : courses) {
                    std::cout << course << " ";
                }
                std::cout << std::endl;
            }
        };
        
        int main() {
            Student student("John Doe", 10);
        
            student.addCourse("Math");
            student.addCourse("Science");
            student.addCourse("History");
        
            student.printCourses();
        
            student.removeCourse("Science");
            student.printCourses();
        
            return 0;
        }