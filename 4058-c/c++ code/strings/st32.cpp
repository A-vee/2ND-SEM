#include <iostream>
using namespace std;

int main()
{
    string str, s;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            while (str[i + 1] == ' ')
                i++;
        else
            s.append(1, str[i]);
    }
    cout << "Resulting String : " << s << endl;
    return 0;
}