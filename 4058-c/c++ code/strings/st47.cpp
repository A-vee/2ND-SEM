#include <iostream>

using namespace std;

int main() {
    char firstCh, lastCh;

    cout<<"Enter the starting character: ";
    cin>>firstCh;

    cout<<"Enter the ending character: ";
    cin>>lastCh;

    if (firstCh > lastCh) {
        cout<<"Starting character should be less than or equal to the ending character."<<endl;
        return 1;
    }

    cout<<"Characters between "<<firstCh<<" and "<<lastCh<<":"<<endl;
    for (char ch = firstCh + 1; ch < lastCh; ++ch) {
        cout<<ch <<" ";
    }
    cout<<endl;

    return 0;
}