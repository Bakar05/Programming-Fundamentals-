#include <iostream>
#include <cmath> 
using namespace std;

double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    double base, exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
