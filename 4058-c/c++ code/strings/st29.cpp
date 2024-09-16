#include <iostream>
using namespace std;

int main()
{
    string str;
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
    cout << "Words: "<< endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < count[i]; j++)
            cout << words[i][j];
        cout << endl;
    }

    return 0;
}
