#include <iostream>
#include <iomanip> // For setting decimal precision

using namespace std;

int main() {
    double units, bill = 0.0;

    // Welcome message
    cout << "Welcome to the Pakistani Electricity Bill Calculator!" << endl;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Validate input
    if (units < 0) {
        cout << "Error: Number of units cannot be negative. Please try again." << endl;
        return 1; // Exit with error code
    }

    if (units <= 100) {
        bill = units * 25.0;  // 25 PKR per unit for the first 100 units
    } else if (units <= 200) {
        bill = (100 * 25.0) + ((units - 100) * 30.0);  // 30 PKR per unit for units from 101 to 200
    } else if (units <= 300) {
        bill = (100 * 25.0) + (100 * 30.0) + ((units - 200) * 35.0);  // 35 PKR per unit for units from 201 to 300
    } else {
        bill = (100 * 25.0) + (100 * 30.0) + (100 * 35.0) + ((units - 300) * 50.0);  // 50 PKR per unit for units above 300
    }

    cout << fixed << setprecision(2);
    cout << "Your total electricity bill is: PKR " << bill << endl;

    cout << "Thank you for using the Pakistani Electricity Bill Calculator!" << endl;

    return 0;
}
