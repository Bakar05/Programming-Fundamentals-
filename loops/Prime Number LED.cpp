#include <iostream>
using namespace std;

int main() {
    int number, primeLED = 0;

    do {
        cout << "Enter any integer number (enter 0 to end): ";
        cin >> number;

        if (number != 0) {
            bool isPrime = true;

            if (number <= 1) {
                isPrime = false;
            } else {
                for (int i = 2; i < number; ++i) {
                    if (number % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }

            if (isPrime) {
                primeLED = 1;
            } else {
                primeLED = 0;
            }

            switch (primeLED) {
                case 1:
                    cout << "Turning ON the LED..." << endl;
                    break;
                case 0:
                    cout << "Turning OFF the LED..." << endl;
                    break;
            }
        }
    } while (number != 0);

    return 0;
}
