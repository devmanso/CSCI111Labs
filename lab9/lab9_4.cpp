#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n = rand() % 100 + 1;

    cout << "The random integer is " << n << endl;

    int lengths[100];
    cout << "Enter " << n << " row lengths: ";
    for (int i = 0; i < n; i++) {
        cin >> lengths[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < lengths[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
