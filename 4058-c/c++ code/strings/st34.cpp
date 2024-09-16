#include <iostream>
using namespace std;

int main()
{
    char ch;
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    cout << "Enter the character: ";
    cin >> ch;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            str[i] = ch;
    }
    cout << "Resulting String : " << str << endl;
    return 0;
}