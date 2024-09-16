#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    int parts;

    cout<<"Enter string: ";
    cin>>str;

    cout<<"Enter the number of parts to divide the string into: ";
    cin>>parts;

    int length = str.length();
    int partSize = length / parts;
    int extraChars = length % parts;
    int startPos = 0;

    cout<<"Divided string into " <<parts<< " parts:"<<endl;
    for (int i=0; i<parts; ++i) {
        int currentPartSize = partSize + (extraChars-- > 0 ? 1 : 0);
        cout<<str.substr(startPos, currentPartSize) <<endl;
        startPos+= currentPartSize;
    }

    return 0;
}