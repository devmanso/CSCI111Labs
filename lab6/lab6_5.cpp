#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand(time(nullptr));

    int tosses = 10;
    int heads = 0;
    int tails = 0;

    for (int i = 0; i < tosses; i++) {
        int result = rand() % 2; 
        if (result == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    cout << fixed << setprecision(4); // needed to print like 0.5000
    cout << "Probability of heads given " << tosses << " tosses = " << (heads * 1.0 / tosses) << endl;
    cout << "Probability of tails given " << tosses << " tosses = " << (tails * 1.0 / tosses) << endl;

    
    tosses = 100;
    heads = 0;
    tails = 0;

    for (int i = 0; i < tosses; i++) {
        int result = rand() % 2;
        if (result == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    cout << "Probability of heads given " << tosses << " tosses = " << (heads * 1.0 / tosses) << endl;
    cout << "Probability of tails given " << tosses << " tosses = " << (tails * 1.0 / tosses) << endl;

    tosses = 1000;
    heads = 0;
    tails = 0;

    for (int i = 0; i < tosses; i++) {
        int result = rand() % 2;
        if (result == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    cout << "Probability of heads given " << tosses << " tosses = " << (heads * 1.0 / tosses) << endl;
    cout << "Probability of tails given " << tosses << " tosses = " << (tails * 1.0 / tosses) << endl;

    tosses = 10000;
    heads = 0;
    tails = 0;

    for (int i = 0; i < tosses; i++) {
        int result = rand() % 2;
        if (result == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    cout << "Probability of heads given " << tosses << " tosses = " << (heads * 1.0 / tosses) << endl;
    cout << "Probability of tails given " << tosses << " tosses = " << (tails * 1.0 / tosses) << endl;

    return 0;
}
