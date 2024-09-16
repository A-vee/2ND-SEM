#include <iostream>
using namespace std;

int main()
{
    string s;
    int flag = 1;
    char ch1, ch2;
    cout << "Enter the string : ";
    getline(cin, s);
    cout << "Enter the character for swapping : ";
    cin >> ch1;
    cout << "Enter the character with whom you want to swap : ";
    cin >> ch2;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ch1)
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == ch2)
                {
                    swap(s[i], s[j]);
                    flag = 0;
                    break;
                }
            }
            break;
        }
    }
    if (flag != 0)
        cout << "Character is not present with whom you want to swap." << endl;
    else
        cout << "Resulting string : " << s << endl;

    return 0;
}