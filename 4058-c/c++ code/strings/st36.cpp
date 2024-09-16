#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char* str = "This is the 36th program of strings";
    char delimiter = ' ';
    int start = 0;

    while (const char* p = strchr(str + start, delimiter)) {
        int sub_len = p - (str + start);
        char sub_str[sub_len + 1];
        strncpy(sub_str, str + start, sub_len);
        sub_str[sub_len] = '\0';

        cout<<sub_str<<endl;

        start = p - str + 1;
    }

    int sub_len = strlen(str + start);
    char sub_str[sub_len + 1];
    strncpy(sub_str, str + start, sub_len);
    sub_str[sub_len] = '\0';

    cout<<sub_str<<endl;
    return 0;
}