#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int vowel = 0;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] == 'a' || str[i] == 'e') || (str[i] == 'i' || str[i] == 'o') || (str[i] == 'u'))
            vowel++;
    }
    cout << "Number of vowels in string : " << vowel << endl;
    return 0;
}
