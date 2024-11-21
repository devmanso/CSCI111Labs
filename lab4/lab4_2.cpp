#include <iostream>
using namespace std;

int main() {
    int num;

    // Prompt the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the input is a positive integer
    if (num <= 0) {
        cout << "Invalid input! Bye!" << endl;
        exit(0);  // return 0; also has the same effect
    }

    cout << "Your number in binary in reverse order is: ";    
    while (num > 0) {
        cout << num % 2 << " ";  // Print the remainder of num divided by 2
        num = num / 2;           // Update num to be num divided by 2
    }

    cout << endl;
    return 0;
}
