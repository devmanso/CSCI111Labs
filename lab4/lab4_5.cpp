#include <iostream>
using namespace std;

int main() {
    int num = 0, attempts = 0;

    // Can use break here.
    while (attempts < 3 && (num < 1 || num > 10)) {
        cout << "Enter an integer between 1 and 10: ";
        cin >> num;

        if (num < 1 || num > 10) {
            cout << "Out of range. ";
        }

        attempts++;
    }

    if (num < 1 || num > 10) {
        num = 10;
    }

    // cube is base to the power of 3
    int cube = num * num * num;

    cout << "The cube of your integer is " << cube << "." << endl;

    return 0;
}
