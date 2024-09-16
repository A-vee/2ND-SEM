#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout<<"Enter string: ";
    cin>>str;
    
    cout<<"Individual characters in the string is: ";
    for (size_t i = 0; i < str.length(); ++i) {
        cout<<str[i]<<" ";
    }
    cout<<endl;

    return 0;
}