#include <iostream>
using namespace std;

int removeEvenDuplicate7(int n) {
    if (n <= 0) return 0;
    int lastDigit = n % 10;
    int rest = removeEvenDuplicate7(n / 10);
    if (lastDigit % 2 == 0) return rest;
    if (lastDigit == 7) return rest * 100 + 77;
    return rest * 10 + lastDigit;
}

int main() {
    cout << removeEvenDuplicate7(-7) << endl;       // prints 0
    cout << removeEvenDuplicate7(2) << endl;        // prints 0
    cout << removeEvenDuplicate7(7) << endl;        // prints 77
    cout << removeEvenDuplicate7(9) << endl;        // prints 9
    cout << removeEvenDuplicate7(10) << endl;       // prints 1
    cout << removeEvenDuplicate7(28) << endl;       // prints 0
    cout << removeEvenDuplicate7(47) << endl;       // prints 77
    cout << removeEvenDuplicate7(273765) << endl;   // prints 773775
    return 0;
}
