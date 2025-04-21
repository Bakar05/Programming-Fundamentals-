#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    char choice;
    
    do {
        bool isPrime = true;
        
        cout << "Enter a number: ";
        cin >> number;
        
        if (number == 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= sqrt(number); i++) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
        
        cout << "Do you want to continue testing? (Y/N): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    return 0;
}