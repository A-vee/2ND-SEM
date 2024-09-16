#include <iostream>
#include <string>

using namespace std;

bool containsSubstring(const string& str, const string& substr) {
    return str.find(substr) != string::npos;
}

int main() {
    string firstString, secondString;

    cout << "Enter the first string: ";
    getline(cin, firstString);

    cout << "Enter the second string: ";
    getline(cin, secondString);

    if (containsSubstring(firstString, secondString)) {
        cout << "The first string contains the second string." << endl;
    } else {
        cout << "The first string does not contain the second string." << endl;
    }
    return 0;
}