#include <iostream>
#include <cmath> // For rounding functions

using namespace std;

int numberEven(int x, int y, int z) {
    int count = 0;
    if (x % 2 == 0) count++;
    if (y % 2 == 0) count++;
    if (z % 2 == 0) count++;
    return count;
}

int min(int a, int b, int c, int d) {
    int minimum = a;
    if (b < minimum) minimum = b;
    if (c < minimum) minimum = c;
    if (d < minimum) minimum = d;
    return minimum;
}

int closest(double x) {
    return round(x);
}

int evenLessOdd(int n) {
    int sumEven = 0, sumOdd = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) sumEven += digit;
        else sumOdd += digit;
        n /= 10;
    }
    return sumEven - sumOdd;
}

int main() {
    cout << numberEven(0, 8, 1) << endl;  // Expected output: 2
    cout << numberEven(7, 8, -3) << endl; // Expected output: 1
    cout << numberEven(7, 99, 101) << endl; // Expected output: 0

    cout << min(3, 1, 5, 1) << endl; // Expected output: 1
    cout << min(0, 1, 2, 6) << endl; // Expected output: 0
    cout << min(-1, 7, 4, 1) << endl; // Expected output: -1

    cout << closest(3.35) << endl; // Expected output: 3
    cout << closest(3.75) << endl; // Expected output: 4

    cout << evenLessOdd(23) << endl; // Expected output: -1
    cout << evenLessOdd(1234) << endl; // Expected output: 2
    cout << evenLessOdd(777) << endl; // Expected output: -21

    return 0;
}
