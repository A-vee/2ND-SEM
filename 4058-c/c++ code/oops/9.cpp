#include <iostream>
        #include <string>
        #include <ctime>

        using namespace std;

        class Employee {
        private:
            string name;
            double salary;
            tm hireDate;

        public:
            Employee(string n, double s, int year, int month, int day) : name(n), salary(s) {
                hireDate.tm_year = year - 1900;
                hireDate.tm_mon = month - 1;
                hireDate.tm_mday = day;
                hireDate.tm_hour = 0;
                hireDate.tm_min = 0;
                hireDate.tm_sec = 0;
            }

            int calculateYearsOfService() {
                time_t now = time(0);
                tm* currentTime = localtime(&now);

                int years = currentTime->tm_year - hireDate.tm_year;
                if (currentTime->tm_mon < hireDate.tm_mon || (currentTime->tm_mon == hireDate.tm_mon && currentTime->tm_mday < hireDate.tm_mday)) {
                    years--;
                }

                return years;
            }
        }

            void printDetails() {
                cout << "Name: " << name << endl;
                cout << "Salary: $" << salary << endl;
                cout << "Years of Service: " << calculateYearsOfService() << endl;
            }