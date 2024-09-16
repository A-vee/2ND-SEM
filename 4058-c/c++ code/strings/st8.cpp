#include <iostream>
#include <string>

using namespace std;

enum Fruit {APPLE, MANGO, BANANA, ORANGE, GRAPES};

int main() {
    Fruit fruit = MANGO;
    string fruitString;

    switch (fruit) {
        case APPLE:
            fruitString = "Apple";
            break;
        case MANGO:
            fruitString = "Mango";
            break;
        case BANANA:
            fruitString = "Banana";
            break;
        case ORANGE:
            fruitString = "Orange";
            break;
        case GRAPES:
            fruitString = "Grapes";
            break;
        default:
            fruitString = "Unknown";
    }

    cout << "The fruit is: " << fruitString << endl;

    return 0;
}