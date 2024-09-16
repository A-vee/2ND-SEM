#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str1[] = "Hello";
  char str2[] = "World";

  cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << endl;

  // Swap lengths directly if possible (caution: potential truncation)
  if (strlen(str1) < strlen(str2)) {
    //swap(strlen(str1), strlen(str2));
  }

  // Loop through characters and swap using in-place assignment
  for (int i = 0; i < strlen(str1); i++) {
    char temp = str1[i];
    str1[i] = str2[i];
    str2[i] = temp;
  }

  cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << endl;

  return 0;
}