#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char str[]="Hello how are you";

    int count = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ) {
            count++;
        }
    }

    cout << "The number of words in the string is: " <<count;
    return 0;
}
