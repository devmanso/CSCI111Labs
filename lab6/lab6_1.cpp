#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int userInput;

    srand(time(nullptr)); // nullptr here is same as 0

    cout << "Enter an integer greater than or equal to 20: ";
    cin >> userInput;

    while (userInput < 20) {
        cout << "Invalid input! Try again: ";
        cin >> userInput;
    }

    int randomNumber = rand() % userInput + 1;
    cout << "Random integer between 1 and " << userInput << " is " << randomNumber << "." << endl;

    return 0;
}
