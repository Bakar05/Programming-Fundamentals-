#include <iostream>
using namespace std;

int main() {
    int age, time;
    int price = 0;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the time of the movie (24-hour format): ";
    cin >> time;

    if (age <= 12) {
        price = 5;
    } else if (age >= 13 && age <= 65) {
        if (time < 18) {
            price = 10; 
        } else {
            price = 12; 
        }
    } else if (age >= 66) {
        price = 8;
    }

    cout << "The ticket price is rupees " << price << "." << endl;

    return 0;
}


