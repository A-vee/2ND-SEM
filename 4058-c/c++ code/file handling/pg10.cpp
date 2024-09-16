// 10. Write a C++ program to split a large text file into smaller files of equal size.

#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    ifstream f1;
    ofstream f2;
    string st = "";
    char ch;
    int tc = 0;
    f1.open("Newfile.txt", ios::in);

    while (f1.get(ch)) {
        if (ch == '\n') {
            tc++;
        }
    }
    f1.clear(); 
    f1.seekg(0, ios::beg); 
    double ps = sqrt(tc); 
    int ips = static_cast<int>(ps); 
    int i = 0;
    while (i < ips) {
        string on = "Output" + to_string(i + 1) + ".txt";
        f2.open(on, ios::out);
        for (int j = 0; j < ips && f1.get(ch); j++) {
            f2.put(ch);
        }
        f2.close();
        i++;
        
    }
    f1.close();
    return 0;
}
