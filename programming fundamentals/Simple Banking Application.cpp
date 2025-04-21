#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int choice, amount;

    while (true) {
        cout << "\nChoose an option:\n";
        cout << "1. Deposit money\n";
        cout << "2. Withdraw money\n";
        cout << "3. Check balance\n";
        cout << "4. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                balance += amount;
                break;
            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "ERROR: Withdrawal amount is greater than balance. Transaction cancelled.\n";
                } else {
                    balance -= amount;
                }
                break;
            case 3:
                cout << "Current balance: " << balance << " rupees\n";
                break;
            case 4:
                cout << "Thank you! Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
