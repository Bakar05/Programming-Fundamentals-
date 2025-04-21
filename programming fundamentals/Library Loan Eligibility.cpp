#include <iostream>
using namespace std;

int main() {
    int age, availability;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Is the book available? (1 = Yes, 0 = No): ";
    cin >> availability;

    if (age >= 18 && availability == 1) {
        cout << "You are eligible to take a loan." << endl;
    } else {
        cout << "You are not eligible to take a loan." << endl;
        if (availability != 1) {
            cout << "The book must be available." << endl;
        }
    }

    return 0;
}
