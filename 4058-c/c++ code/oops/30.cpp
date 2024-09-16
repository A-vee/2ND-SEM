        #include <iostream>
        #include <string>
        #include <vector>
        
        class Student {
        private:
            int student_id;
            std::string student_name;
            std::vector<int> grades;
        
        public:
            void setStudentID(int id) {
                student_id = id;
            }
        
            int getStudentID() const {
                return student_id;
            }
        
            void setStudentName(const std::string& name) {
                student_name = name;
            }
        
            std::string getStudentName() const {
                return student_name;
            }
        
            void addGrade(int grade) {
                if (grade >= 0 && grade <= 100) {
                    grades.push_back(grade);
                } else {
                    std::cout << "Invalid grade! Grade should be between 0 and 100." << std::endl;
                }
            }
        };
        
        int main() {
            Student student;
        
            student.setStudentID(1001);
            student.setStudentName(" Govind");
        
            student.addGrade(85);
            student.addGrade(90);
            student.addGrade(110); // Invalid grade
        
            std::cout << "Student ID: " << student.getStudentID() << std::endl;
            std::cout << "Student Name: " << student.getStudentName() << std::endl;
        
            return 0;
        }