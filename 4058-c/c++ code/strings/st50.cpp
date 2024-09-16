#include <iostream>

using namespace std;

int isMiddlePoint(int a, int b, int c);

int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    if (isMiddlePoint(num1, num2, num3))
        cout << "One of the integers is the middle point between the other two." << endl;
    else
        cout << "None of the integers is the middle point between the other two." << endl;

    return 0;
}

int isMiddlePoint(int a, int b, int c) {
    if ((a <= b && b <= c) || (c <= b && b <= a))
        return 1;
    else
        return 0;
}