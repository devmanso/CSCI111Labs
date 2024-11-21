#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    double total = 0;

    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        total += numbers[i];
    }

    double overallAverage = total / 10;
    cout << "Average of the integers in array: " << overallAverage << endl;

    double greaterTotal = 0;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] >= overallAverage) {
            greaterTotal += numbers[i];
            count++;
        }
    }

    if (count > 0) {
        double greaterAverage = greaterTotal / count;
        cout << "Average of the integers greater than or equal to the overall average of " 
             << overallAverage << " is: " << greaterAverage << endl;
    } else {
        cout << "No integers are greater than or equal to the overall average." << endl;
    }

    return 0;
}
