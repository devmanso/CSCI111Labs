#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[3] = {"Mansour", "Alice", "Bob"};
    int scores[3] = {100, 90, 80};

    for (int i = 0; i < 3; i++) {
        cout << names[i] << "'s score is " << scores[i] << "." << endl;
    }

    return 0;
}
