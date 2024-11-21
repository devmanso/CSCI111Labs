#include <iostream>
using namespace std;

int cutThirdDigit(int n) {
    if (n < 100) return n;
    int power = 1;
    while (n / (power * 10) >= 100) power *= 10;
    return (n / (power * 10) * power) + (n % power);
}

int main() {
    cout << cutThirdDigit(7) << endl;
    cout << cutThirdDigit(27) << endl;
    cout << cutThirdDigit(314) << endl;
    cout << cutThirdDigit(4321) << endl;
    return 0;
}
