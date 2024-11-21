#include <iostream>
using namespace std;

int thirdDigit(int n) {
    // If n is less than 100, there is no third digit, return 0
    if (n < 100) {
        return 0;
    }
    // If n is between 100 and 999, the third digit from the left is the leftmost digit
    if (n >= 100 && n < 1000) {
        return n / 100;
    }
    // Recur with the number divided by 10 to remove the rightmost digit
    return thirdDigit(n / 10);
}

int main() {
    cout << thirdDigit(23) << " ";
    cout << thirdDigit(147) << " ";
    cout << thirdDigit(2048) << " ";
    cout << thirdDigit(560125) << endl;
    return 0;
}
