#include <iostream>

using namespace std;

double sumRatios(int num1, int num2) {
    double sum = 0.0;
    while (num1 > 0 && num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;
        
        if (digit2 != 0) {
            sum += (double)digit1 / digit2;
        }

        num1 /= 10;
        num2 /= 10;
    }
    return sum;
}

int main() {
    cout << sumRatios(132, 568) << endl;  // 0.95
    cout << sumRatios(1234, 4561) << endl; // 5.15
    return 0;
}
