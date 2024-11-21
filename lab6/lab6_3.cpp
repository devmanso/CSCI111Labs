#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(nullptr));
    
    int num1, num2;
    
    num1 = rand() % 20 + 1;
    num2 = rand() % 20 + 1;

    // I think technically this could go on infinitely 
    // (although unlikely)
    while (num1 == num2) {
        num1 = rand() % 20 + 1;
        num2 = rand() % 20 + 1;
    }

    int smaller = min(num1, num2);
    int larger = max(num1, num2);
    
    cout << "Random integers are " << smaller << " " << larger << endl;

    double missingLeg = sqrt(pow(larger, 2) - pow(smaller, 2));
    double area = 0.5 * smaller * missingLeg;

    cout << "The length of the missing leg is " << missingLeg << endl;
    cout << "The area of the right triangle is " << area << endl;

    return 0;
}
