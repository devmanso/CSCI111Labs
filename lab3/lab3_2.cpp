#include <iostream>
using namespace std;

int main(void) {
    int angle1, angle2, angle3;
    cout << "Enter an angle in degrees: ";
    cin >> angle1;
    cout << "Enter an angle in degrees: ";
    cin >> angle2;
    cout << "Enter an angle in degrees: ";
    cin >> angle3;

    // Triangles have 3 angle = 180 degrees
    if (angle1 + angle2 + angle3 == 180) {
        cout << "Can form a triangle from these angles." << endl;

        //  equilateral triangle
        if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
            cout << "The triangle is equilateral." << endl;
        }
        // right triangle
        else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            cout << "The triangle is a right triangle." << endl;
        }
        // not equilateral or right
        else {
            cout << "The triangle is neither equilateral nor right." << endl;
        }
    }
    // not a triangle
    else {
        cout << "Cannot form a triangle from these angles." << endl;
    }

    return 0;
}
