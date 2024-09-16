#include <iostream>
#include <string>

using namespace std;

int main() {
  string str="This is the 27th program of strings";
  int index;
  cout<<"Enter the index of the character (0 to " << str.length() - 1 << "): ";
  cin>>index;

  if (index >= 0 && index < str.length()) {
    char character = str[index];
    cout << "Character at index "<<index<<": "<<character<<endl;
  } else {
    cout<<"Invalid index. Please enter a value between 0 and "<<str.length() - 1 <<endl;
  }
  return 0;
}