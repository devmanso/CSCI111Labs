// 24547658
// Mansour quddus

#include <iostream>
#include <string>
using namespace std;

void swapFirstLetters(string &str1, string &str2) {
    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;
}

int longestString(const string &str1, const string &str2) {
    if (str1.length() >= str2.length()) {
        cout << str1 << " is the longest string." << endl;
        return str1.length();
    } else {
        cout << str2 << " is the longest string." << endl;
        return str2.length();
    }
}

void repeatHello(int times) {
    for (int i = 0; i < times; i++) {
        cout << "Hello";
    }
    cout << endl;
}

int main() {
    string firstName, lastName;
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << "Please enter your last name: ";
    cin >> lastName;

    swapFirstLetters(firstName, lastName);
    cout << "Your new first name is " << firstName << endl;
    cout << "Your new last name is " << lastName << endl;

    int lengthLongestStr = longestString(firstName, lastName);
    repeatHello(lengthLongestStr);

    return 0;
}
