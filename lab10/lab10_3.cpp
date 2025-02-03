//24547658
//Mansour Quddus

#include <iostream>
#include <string>
using namespace std;

void readInput(string arr[], int size) {
    cout << "Enter five words: ";
    for (int i = 0; i < size; i++) cin >> arr[i];
}

void getPrefixes(string source[], string dest[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = source[i].substr(0, 3);
    }
}

string concatenateStrings(string arr[], int size) {
    string result = "";
    for (int i = 0; i < size; i++) {
        result += arr[i];
    }
    return result;
}

int main() {
    string words[5], prefixes[5];

    readInput(words, 5);
    getPrefixes(words, prefixes, 5);

    string concatenated = concatenateStrings(prefixes, 5);
    
    cout << "Concatenated string is " << concatenated << endl;

    return 0;
}
