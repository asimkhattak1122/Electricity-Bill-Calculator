#include <iostream>
#include <iomanip> // For setting decimal precision

using namespace std;

int main() {
    double units, bill = 0.0;

    // Welcome message
    cout << "Welcome to the Electricity Bill Calculator!" << endl;

    // Prompt user for input
    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Validate input
    if (units < 0) {
        cout << "Error: Number of units cannot be negative. Please try again." << endl;
        return 1; // Exit with error code
    }

    // Calculate the bill based on units consumed
    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 200) {
        bill = (100 * 1.5) + ((units - 100) * 2.0);
    } else if (units <= 300) {
        bill = (100 * 1.5) + (100 * 2.0) + ((units - 200) * 3.0);
    } else {
        bill = (100 * 1.5) + (100 * 2.0) + (100 * 3.0) + ((units - 300) * 5.0);
    }

    // Display the bill with two decimal points
    cout << fixed << setprecision(2);
    cout << "Your total electricity bill is: $" << bill << endl;

    // Closing message
    cout << "Thank you for using the Electricity Bill Calculator!" << endl;

    return 0; // Exit successfully
}
