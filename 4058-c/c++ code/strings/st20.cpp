#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int charFrequency[256] = {0};

    for (char ch : str) {
        charFrequency[ch]++;
    }

    int duplicateCount= 0;

    for (int i = 0; i<256; ++i) {
        if(charFrequency[i]>1) {
            cout<<"Character '"<< char(i)<<"' appears "<<charFrequency[i]<<" times."<<endl;
            duplicateCount++;
        }
    }

    if (duplicateCount==0) {
        cout<<"No duplicate characters found in the string."<<endl;
    }
    return 0;
}