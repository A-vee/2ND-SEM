#include <iostream>
#include <string>

using namespace std;

string reverseWords(const string& str);

int main() {
  string str = "This is the 39th program of strings";
  string reversed_str = reverseWords(str);
  cout << "Original string: " << str << endl;
  cout << "Reversed string: " << reversed_str << endl;
  return 0;
}

string reverseWords(const string& str) {
  string reversed;
  string word;

  for (char c : str) {
    if (c == ' ') {
      if (!word.empty()) {
        reversed = word + " " + reversed;
        word.clear();
      }
    } else {
      word += c;
    }
  }

  if (!word.empty()) {
    reversed = word + " " + reversed;
  }

  if (reversed[0] == ' ') {
    reversed.erase(0, 1);
  }

  return reversed;
}