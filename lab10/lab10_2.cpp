// 24547658
// Mansour Quddus

#include <iostream>
#include <string>
using namespace std;

void firstTwo(string arr[], int cap) {
    for (int i = 0; i < cap; i++) {
        string nextPrefix = arr[(i + 1) % cap].substr(0, 2);
        arr[i] += nextPrefix;
    }
}

int main() {
    int cap = 0;
    cout << "Enter a positive integer that is at least 3: ";
    cin >> cap;

    string names[cap];
    cout << "Enter " << cap << " names (separate by space): ";
    for (int i = 0; i < cap; i++) cin >> names[i];

    firstTwo(names, cap);

    cout << "Modified names are ";
    for (int i = 0; i < cap; i++) cout << names[i] << " ";
    cout << endl;

    return 0;
}
