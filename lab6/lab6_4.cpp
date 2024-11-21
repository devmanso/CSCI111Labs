#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int n = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Guess the integer I've picked from the range 1 to 100: ";
    cin >> guess;
    attempts++;

    while (guess != n) {
        if (guess > n) {
            cout << "Too big." << endl;
        } else {
            cout << "Too small." << endl;
        }

        cout << "Try again: ";
        cin >> guess;
        attempts++;
    }

    cout << "Congratulations! You took " << attempts << " guesses." << endl;

    return 0;
}
