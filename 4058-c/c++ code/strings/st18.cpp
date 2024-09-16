#include <iostream>
using namespace std;

int main()
{
    string s;
    string str;
    char ch;
    cout << "Enter the string : ";
    getline(cin, s);
    int max, min, max_pos = 0, min_pos = 0, count[100], c = 1, m = 0, flag = 1;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
        for (int j = 0; j < str.length(); j++)
        {
            if (ch == str[j])
                flag = 0;
        }
        if (flag != 0)
        {
            str.append(1, s[i]);
            for (int k = 0; k < s.length(); k++)
            {
                if (k != i)
                    if (ch == s[k])
                        c++;
            }
            count[m] = c;
            c = 1;
            m++;
        }
        flag = 1;
    }

    max = count[0];
    min = count[0];
    for (int i = 0; i < m; i++)
    {
        if (max < count[i])
            max_pos = i;

        else if (min >= count[i])
            min_pos = i;
    }
    cout << "Maximum occuring character : " << str[max_pos] << " , with count : " << count[max_pos] << endl;
    cout << "Mininmum occuring character : " << str[min_pos] << " , with count : " << count[min_pos] << endl;
    return 0;
}