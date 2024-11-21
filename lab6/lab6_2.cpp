#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int num1, num2;

    srand(time(nullptr));

    cout << "Enter two positive integers with a difference of at least 20: ";
    cin >> num1 >> num2;

    while (num1 < 0 || num2 < 0 || abs(num1 - num2) < 20) {
        cout << "Invalid input! Try again: ";
        cin >> num1 >> num2;
    }

    int smaller = min(num1, num2);
    int larger = max(num1, num2);
    int randomNumber = rand() % (larger - smaller + 1) + smaller;
    
    cout << "Random integer between " << smaller << " and " << larger << " is " << randomNumber << "." << endl;

    return 0;
}
