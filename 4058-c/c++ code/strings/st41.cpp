#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int ch[256] = {0};

    for (int i = 0; i < str.length(); ++i) {
        ch[str[i]]++;
    }

    char result = '\0';
    for (int i = 0; i < str.length(); ++i) {
        if (ch[str[i]] == 1) {
            result = str[i];
            break;
        }
    }

    if (result != '\0') {
        cout<<"The first non-repeated character is: "<<result<<endl;
    } else {
        cout<<"No non-repeated character found."<<endl;
    }

    return 0;
}