        #include <iostream>
        #include <string>
        #include <vector>
        
        class Student {
        private:
            int student_id;
            std::string student_name;
            std::vector<int> grades;
        
        public:
            Student(int id, std::string name) : student_id(id), student_name(name) {}
        
            int getStudentId() const {
                return student_id;
            }
        
            void setStudentId(int id) {
                student_id = id;
            }
        
            std::string getStudentName() const {
                return student_name;
            }
        
            void setStudentName(std::string name) {
                student_name = name;
            }
        
            void addGrade(int grade) {
                if (grade >= 0 && grade <= 100) {
                    grades.push_back(grade);
                } else {
                    std::cout << "Invalid grade! Grade should be between 0 and 100." << std::endl;
                }
            }
        
            void display() const {
                std::cout << "Student ID: " << student_id << std::endl;
                std::cout << "Student Name: " << student_name << std::endl;
                std::cout << "Grades: ";
                for (int grade : grades) {
                    std::cout << grade << " ";
                }
                std::cout << std::endl;
            }
        };
        
        int main() {
            Student student(1001, "Alice");
            std::cout << "Initial Details:" << std::endl;
            student.display();
            student.setStudentId(1002);
            student.setStudentName("Bob");
            std::cout << "\nModified Details:" << std::endl;
            student.display();
            student.addGrade(85);
            student.addGrade(92);
            student.addGrade(78);
            student.addGrade(105);
            std::cout << "\nFinal Details:" << std::endl;
            student.display();
            return 0;
        }