#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter an integer (enter 0 to stop): ";
    cin >> num;

    // Continue accepting integers until the user enters 0
    while (num != 0) {
        sum += num;  // Add the entered integer to the sum
        // next integer
        cout << "Enter an integer (enter 0 to stop): ";
        cin >> num;
    }
    cout << "Sum of entered integers is " << sum << ".";
    
    if (sum > 100) {
        cout << " That's big!";
    }

    cout << endl;
    return 0;
}
