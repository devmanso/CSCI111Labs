#include <iostream>
using namespace std;

int main(void) {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int sum = num1 + num2;
    
    if (sum >= 10 && sum <= 99) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}
