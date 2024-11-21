#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Enter a positive integer that is at most 10: ";
    cin >> n;

    if (n <= 0 || n > 10) {
        cout << "Invalid input. Program terminated." << endl;
        return 0;
    }

    int arr[10][10];
    double firstRowSum = 0, lastColumnSum = 0, totalSum = 0;
    int countGreaterOrEqual = 0;

    // Populate and print the array
    cout << "Generated " << n << " x " << n << " array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 9 + 1; // from 0-9 then shift by 1 to get 1-10
            cout << arr[i][j] << " ";
            totalSum += arr[i][j];
            if (i == 0) firstRowSum += arr[i][j]; // Sum of the first row
            if (j == n - 1) lastColumnSum += arr[i][j]; // Sum of the last column
        }
        cout << endl;
    }

    double overallAverage = totalSum / (n * n);
    double firstRowAverage = firstRowSum / n;
    double lastColumnAverage = lastColumnSum / n;

    // Count elements greater than or equal to overall average
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] >= overallAverage) {
                countGreaterOrEqual++;
            }
        }
    }

    cout << "Average of the first row is " << firstRowAverage << endl;
    cout << "Average of the last column is " << lastColumnAverage << endl;
    cout << "Average of the 2-dimensional array is " << overallAverage << endl;
    cout << "# elements that are greater than or equal to the overall average of " 
         << overallAverage << " is " << countGreaterOrEqual << endl;

    return 0;
}
