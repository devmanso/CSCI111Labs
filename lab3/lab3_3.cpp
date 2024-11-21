#include <iostream>
#include <iomanip> // Needed for setprecision thing
using namespace std;

int main(void) {
    int senior_children_tickets, regular_tickets;
    string showType;

    cout << "Enter the number of tickets for seniors and children: ";
    cin >> senior_children_tickets;

    if (senior_children_tickets < 0) {
        cout << "Invalid quantity. Bye!" << endl;
        exit(0);
    }

    cout << "Enter the number of regular priced tickets: ";
    cin >> regular_tickets;

    if (regular_tickets < 0) {
        cout << "Invalid quantity. Bye!" << endl;
        exit(0);
    }

    cout << "Enter show type <matinee/evening>: ";
    cin >> showType;

    double senior_child_price, regular_price;

    if (showType == "matinee") {
        senior_child_price = 5.00;
        regular_price = 10.00;
    } else if (showType == "evening") {
        senior_child_price = 8.00;
        regular_price = 15.00;
    } else {
        cout << "Invalid show type. Bye!" << endl;
        exit(0);
    }

    // Calculate subtotal
    double subtotal = (senior_children_tickets * senior_child_price) + (regular_tickets * regular_price);

    // Calculate tax (5%)
    double tax = subtotal * 0.05;

    // Calculate true total
    double total = subtotal + tax;

    // reciept
    cout << "=======================" << endl;
    cout << "Receipt" << endl;
    cout << "-----------------------" << endl;
    cout << (showType == "matinee" ? "Matinee" : "Evening") << " Show" << endl;
    cout << fixed << setprecision(2); // Set output precision for prices,
    // so the output doesn't look like "0.200000000" or something like that
    cout << "Seniors and Children @ $" << senior_child_price << " x " << senior_children_tickets << endl;
    cout << "Regular @ $" << regular_price << " x " << regular_tickets << endl;
    cout << "-----------------------" << endl;
    cout << "Tickets Sold: " << senior_children_tickets + regular_tickets << endl;
    cout << "Subtotal: $ " << subtotal << endl;
    cout << "Tax @ 5%: $ " << tax << endl;
    cout << "=======================" << endl;
    cout << "Total: $ " << total << endl;

    return 0;
}
