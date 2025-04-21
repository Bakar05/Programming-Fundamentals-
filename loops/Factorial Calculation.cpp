#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    unsigned long long factorial = 1;
    int counter = number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        while (counter > 1) {
            factorial *= counter;
            counter--;
        }
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }
    return 0;
}