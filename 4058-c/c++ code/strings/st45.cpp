#include <iostream>

using namespace std;

int main() 
{
    char str[1000];
    int count = 0;
    char prevChar = ' ';
    
    cout<<"Enter a string: ";
    gets(str);

    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = str[i];

        if (ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r') {
            if (prevChar == ' ' || prevChar == '\t' || prevChar == '\n' || prevChar == '\r') {
                count++;
            }
        }

        prevChar = ch;
    }

    cout<<"Number of words in the string: "<<count<<endl;

    return 0;
}