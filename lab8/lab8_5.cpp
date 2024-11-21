#include <iostream>
using namespace std;

int threeLeftDigitSum(int n) {
    if (n <= 0) return 0;
    while (n >= 1000) n /= 10;
    if (n < 10) return n;
    if (n < 100) return n / 10 + n % 10;
    return n / 100 + (n / 10) % 10 + n % 10;
}

int main() {
    cout << threeLeftDigitSum(254982) << endl; // prints 11
    cout << threeLeftDigitSum(100289) << endl; // prints 1
    cout << threeLeftDigitSum(124) << endl;    // prints 7
    cout << threeLeftDigitSum(27) << endl;     // prints 9
    cout << threeLeftDigitSum(3) << endl;      // prints 3
    cout << threeLeftDigitSum(-1) << endl;     // prints 0
    return 0;
}
