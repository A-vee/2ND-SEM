#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    string longestRepeatedSeq;
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int len = 0;
            while (j + len < n && str[i + len] == str[j + len]) {
                len++;
            }

            if (len > maxLength) {
                maxLength = len;
                longestRepeatedSeq = str.substr(i, len);
            }
        }
    }

    if (maxLength == 0) {
        cout << "No repeating sequence found." << endl;
    } else {
        cout << "Longest repeating sequence: " << longestRepeatedSeq << endl;
    }

    return 0;
}