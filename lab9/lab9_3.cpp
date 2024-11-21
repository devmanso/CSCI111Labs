#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer (at most 100): ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid input. Program terminated." << endl;
        return 0;
    }

    int numbers[100];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    for (int i = n - 1; i >= 0; i--) {
        if (numbers[i] % 2 != 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
