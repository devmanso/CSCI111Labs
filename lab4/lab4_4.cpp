#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    while (num <= 0) {
        cout << "Invalid input! Try again: ";
        cin >> num;
    }

    int product = 1;
    bool is_odd_digit = false;

    while (num > 0) {
        int digit = num % 10;  // Get the last digit

        // Check if the digit is odd
        if (digit % 2 != 0) {
            product *= digit;  // Multiply the odd digit
            is_odd_digit = true;
        }

        num = num / 10;  // Remove the last digit
    }

    // If no odd digits were found, product should be 0
    if (!is_odd_digit) {
        product = 0;
    }

    // Output the result
    cout << "The product of the odd digits in the number is " << product << "." << endl;

    return 0;
}
