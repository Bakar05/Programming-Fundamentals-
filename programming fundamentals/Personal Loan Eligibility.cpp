#include <iostream>
#include <string>
using namespace std;

int main() {
    int age, income, yearsOfEmployment;
    string employmentType;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 65) {
        cout << "Enter your annual income: ";
        cin >> income;
        cout << "Are you employed part-time or full-time? ";
        cin >> employmentType;

        if (employmentType == "part-time") {
            cout << "How many years have you been working part-time? ";
            cin >> yearsOfEmployment;
        }

        if (employmentType == "full-time" && income >= 200000) {
            cout << "You are eligible for a loan." << endl;
        } else if (employmentType == "part-time" && income >= 100000 && yearsOfEmployment > 2) {
            cout << "You are eligible for a loan." << endl;
        } else {
            cout << "You are not eligible for a loan." << endl;
        }

    } else {
        cout << "You are not eligible for a loan." << endl;
    }

    return 0;
}
