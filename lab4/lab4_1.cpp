#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    // check if num is positive
    while (num <= 0) {
        cout << "Invalid input! Try again: ";
        cin >> num;
    }

    cout << "The factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {  // If there's no remainder, i is a factor
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
