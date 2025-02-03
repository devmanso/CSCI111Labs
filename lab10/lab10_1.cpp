// 24547658
// Mansour Quddus

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char randomChar() {
    return 'a' + rand() % 26;
}

void fillCharArray(char arr[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = randomChar();
        }
    }
}

void printArray(char arr[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void vowelsPerRow(char arr[][4], int vowelCounts[], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int count = 0;
        for (int j = 0; j < cols; j++) {
            if (isVowel(arr[i][j])) {
                count++;
            }
        }
        vowelCounts[i] = count;
    }
}

void vowelsPerCol(char arr[][4], int vowelCounts[], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int count = 0;
        for (int i = 0; i < rows; i++) {
            if (isVowel(arr[i][j])) {
                count++;
            }
        }
        vowelCounts[j] = count;
    }
}

void printVowelRows(int vowelCounts[], int rows) {
    for (int i = 0; i < rows; i++) {
        if (vowelCounts[i] > 0) {
            cout << "Row " << i << " contains " << vowelCounts[i] << " vowel";
            if (vowelCounts[i] > 1) cout << "s";
            cout << "." << endl;
        }
    }
}


void printVowelCols(int vowelCounts[], int cols) {
    for (int i = 0; i < cols; i++) {
        if (vowelCounts[i] > 0) {
            cout << "Col " << i << " contains " << vowelCounts[i] << " vowel";
            if (vowelCounts[i] > 1) cout << "s";
            cout << "." << endl;
        }
    }
}

int main() {
    char charArr[2][4];
    int numVowelsPerRow[2] = {}, numVowelsPerCol[4] = {};
    
    srand(time(0));

    fillCharArray(charArr, 2, 4);
    printArray(charArr, 2, 4);

    vowelsPerRow(charArr, numVowelsPerRow, 2, 4);
    vowelsPerCol(charArr, numVowelsPerCol, 2, 4);

    printVowelRows(numVowelsPerRow, 2);
    printVowelCols(numVowelsPerCol, 4);

    return 0;
}
