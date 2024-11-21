#include <iostream>
#include <string>

using namespace std;

int taxRate(string status, int income) {
    if (status == "single") {
        if (income <= 11600) return 10;
        else if (income <= 47150) return 12;
        else if (income <= 100525) return 22;
        else if (income <= 191950) return 24;
        else return 35;
    } else if (status == "married") {
        if (income <= 23200) return 10;
        else if (income <= 94300) return 12;
        else if (income <= 201050) return 22;
        else if (income <= 383900) return 24;
        else return 35;
    }
    return 0; // Return 0 if status is invalid
}

void printStandardDeduct(string status) {
    if (status == "single") {
        cout << "The standard deduct for single is $14600" << endl;
    } else if (status == "married") {
        cout << "The standard deduct for married is $29200" << endl;
    } else {
        cout << "Invalid status" << endl;
    }
}

int main() {
    cout << "Tax rate is " << taxRate("single", 100000) << "%" << endl;
    cout << "Tax rate is " << taxRate("married", 400000) << "%" << endl;
    printStandardDeduct("single");
    printStandardDeduct("married");
    return 0;
}
