#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    // Sort both strings
    for (size_t i = 0; i < str1.length(); ++i) {
        for (size_t j = i + 1; j < str1.length(); ++j) {
            if (str1[i] > str1[j]) {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    for (size_t i = 0; i < str2.length(); ++i) {
        for (size_t j = i + 1; j < str2.length(); ++j) {
            if (str2[i] > str2[j]) {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    // Check if sorted strings are equal
    if (str1 == str2) {
        cout << "Both strings are created with the same characters." << endl;
    } else {
        cout << "Strings are not created with the same characters." << endl;
    }
    return 0;
}