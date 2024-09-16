#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;
   
    if (str1.length() != str2.length()) {
        cout << "These strings are of different lengths.So, that they cannot be rotations of each other." << endl;
        return 0;
    }
    
    string st3 = str1 + str1;
   
    if (st3.find(str2) != string::npos)
        cout << str2 << " is a rotation of " << str1 << endl;
    else
        cout << str2 << " is not a rotation of " << str1 << endl;
    
    return 0;
}