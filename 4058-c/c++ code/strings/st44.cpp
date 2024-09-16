#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int MAX_NAMES = 10;
    char names[MAX_NAMES][50];
    int n;

    cout<<"Enter the number of names: ";
    cin>>n;

    cout<<"Enter "<<n<<" names:"<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>names[i];
    }

    // Bubble sort
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    cout<<"Names sorted in alphabetical order:"<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<names[i]<<endl;
    }

    return 0;
}