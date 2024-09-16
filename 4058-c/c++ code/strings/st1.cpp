#include <iostream>
using namespace std;

int main()
{
    int i, j, l;
    string s1;
    string s2;
    cout << "Enter First String : ";
    cin >> s1;
    cout << "Enter Second String : ";
    cin >> s2;
    if (s1.length() == s2.length())
    {
        l = s1.length();
        for (int i = 0; i < l; i++)
            for (int j = 0; j < l - i - 1; j++)
            {
                if (s1[j] > s1[j + 1])
                    swap(s1[j], s1[j + 1]);
                if (s2[j] > s2[j + 1])
                    swap(s2[j], s2[j + 1]);
            }
        if (s1 == s2)
            cout << "Both string are anagram." << endl;
        else
            cout << "Both string are not anagram." << endl;
    }
    else
        cout << "Both string are not of equal legnth" << endl;
    return 0;
}