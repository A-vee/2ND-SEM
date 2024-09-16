// 16. Write a C++ program to store the information of 10 Students having rollno,name,marks,mobileno properties, get() and set() member functions as binary file with following options 1. Insert Record 2. Delete Record 3. Update Record (based on rollno) 4. Search Record (based on rollno) 5. Clone the file 6. Exit. 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
private:
    int rollno;
    string name;
    float marks;
    long long mobileNo;

public:
    Student() {
        rollno = 0;
        name = "";
        marks = 0.0f;
        mobileNo = 0;
    }

    void readData() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Enter mobile number: ";
        cin >> mobileNo;
    }

    void displayData() const {
        cout << "Roll number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Mobile number: " << mobileNo << endl;
    }

    int getRollNo() const { return rollno; }

    void writeToFile(fstream& file) const {
        file.write(reinterpret_cast<const char*>(this), sizeof(Student));
    }

    void readFromFile(fstream& file) {
        file.read(reinterpret_cast<char*>(this), sizeof(Student));
    }
};

void insertRecord(fstream& file) {
    Student student;
    student.readData();
    student.writeToFile(file);
    cout << "Record inserted successfully.\n";
}

void deleteRecord(fstream& file, int rollno) {
    fstream tempFile("temp.bin", ios::out | ios::binary);
    Student student;
    while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        if (student.getRollNo() != rollno) {
            student.writeToFile(tempFile);
        }
    }
    file.close();
    tempFile.close();
    remove("students.bin");
    rename("temp.bin", "students.bin");
    cout << "Record deleted successfully.\n";
}

void updateRecord(fstream& file, int rollno) {
    fstream tempFile("temp.bin", ios::out | ios::binary);
    Student student;
    bool found = false;
    while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        if (student.getRollNo() == rollno) {
            found = true;
            student.readData();
        }
        student.writeToFile(tempFile);
    }
    file.close();
    tempFile.close();
    remove("students.bin");
    rename("temp.bin", "students.bin");
    if (found) {
        cout << "Record updated successfully.\n";
    } else {
        cout << "Record with rollno " << rollno << " not found.\n";
    }
}

void searchRecord(fstream& file, int rollno) {
    Student student;
    bool found = false;
    file.clear();
    file.seekg(0, ios::beg);
    while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        if (student.getRollNo() == rollno) {
            found = true;
            student.displayData();
            break;
        }
    }
    if (!found) {
        cout << "Record with rollno " << rollno << " not found.\n";
    }
}

void cloneFile(fstream& file) {
    fstream cloneFile("students_clone.bin", ios::out | ios::binary);
    Student student;
    while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        student.writeToFile(cloneFile);
    }
    cloneFile.close();
    cout << "File cloned successfully.\n";
}

int main() {
    fstream file("students.bin", ios::in | ios::out | ios::binary | ios::app);
    if (!file) {
        cerr << "Error opening file.\n";
        return 1;
    }

    int choice;
    do {
        cout << "\n1. Insert Record\n";
        cout << "2. Delete Record\n";
        cout << "3. Update Record (based on rollno)\n";
        cout << "4. Search Record (based on rollno)\n";
        cout << "5. Clone the file\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                insertRecord(file);
                break;
            }
            case 2: {
                int rollno;
                cout << "Enter rollno to delete record: ";
                cin >> rollno;
                deleteRecord(file, rollno);
                break;
            }
            case 3: {
                int rollno;
                cout << "Enter rollno to update record: ";
                cin >> rollno;
                updateRecord(file, rollno);
                break;
            }
            case 4: {
                int rollno;
                cout << "Enter rollno to search record: ";
                cin >> rollno;
                searchRecord(file, rollno);
                break;
            }
            case 5: {
                cloneFile(file);
                break;
            }
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 6);

    file.close();
    return 0;
}
