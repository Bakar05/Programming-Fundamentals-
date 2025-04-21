#include <iostream>
using namespace std;

float kilometersToMiles(float km) {
    return km * 0.621371;
}

float inchesToCentimeter(float inch) {
    return inch * 2.54;
}

int main() {
    int choice;
    
    do {
        cout << "Select one (1-3):\n1. Convert kilometers to miles.\n2. Convert inches to centimeters.\n3. Exit\n";
        cin >> choice;

        if (choice == 1) {
            float km;
            cout << "Enter kilometers: ";
            cin >> km;
            cout << km << " kilometers = " << kilometersToMiles(km) << " miles." << endl;
        } else if (choice == 2) {
            float inch;
            cout << "Enter inches: ";
            cin >> inch;
            cout << inch << " inches = " << inchesToCentimeter(inch) << " centimeters." << endl;
        } else if (choice == 3) {
            cout << "Exiting program." << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
