#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int n= str.length();
    int totalSubsets = 1<<n;

    cout << "All subsets of the string are:" << endl;
    for (int i=0; i<totalSubsets; ++i) {
        string subset = "";
        for (int j=0; j<n; ++j) {
            if (i & (1 << j)) {
                subset += str[j];
            }
        }
        cout<<"{" << subset << "}" <<endl;
    }
    return 0;
}