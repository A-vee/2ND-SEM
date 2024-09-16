#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    char s[100][100];
    char words[100][100];
    int m = 0, count[100] = {0};
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; str[i] != ' ' && str[i] != '\0'; i++)
        {
            words[m][j] = str[i];
            count[m]++;
            j++;
        }
        if (str[i + 1] != ' ')
            m++;
    }

    for (int i = 0; i < m; i++)
    {
        cout << "Words : ";
        for (int j = 0; j < count[i]; j++)
            cout << words[i][j];
        cout << " , Count : " << count[i] << endl;
    }

    return 0;
}