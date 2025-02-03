//24547658
// Mansour Quddus

#include <iostream>
#include <string>
using namespace std;

void bookEndString(string &s, int r) {
    if (s[0] == s[s.length() - 1]) {
        string repeat(r, s[0]);
        s = repeat + s + repeat;
    } else {
        string repeat(r, 'Z');
        s = repeat + s + repeat;
    }
}

int main() {
    string word;
    int repeatCount;

    do {
        cout << "Enter a word with at least three letters: ";
        cin >> word;
        if (word.length() < 3) {
            cout << "Invalid input! ";
        }
    } while (word.length() < 3);

    do {
        cout << "Enter a number greater than 0: ";
        cin >> repeatCount;
        if (repeatCount <= 0) {
            cout << "Invalid input! ";
        }
    } while (repeatCount <= 0);

    bookEndString(word, repeatCount);
    cout << "The modified word is: " << word << endl;

    return 0;
}
