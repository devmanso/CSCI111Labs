#include <iostream>

using namespace std;

double countChange(int q, int d, int n, int p) {
    double total = (q * 0.25) + (d * 0.10) + (n * 0.05) + (p * 0.01);
    return total;
}

int main() {
    int q = 10, d = 5, n = 1, p = 2;
    double x = countChange(q, d, n, p);
    cout << "You have $" << x << "." << endl;
    return 0;
}