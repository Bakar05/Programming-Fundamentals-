#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    cout << "Addition = " << a + b + c << endl;
    cout << "Subtraction = " << a - b - c << endl;
    cout << "Multiplication = " << a * b * c << endl;

    if (b != 0 && c != 0)
        cout << "Division = " << a / b / c << endl;
    else
        cout << "Division by zero is not allowed." << endl;

    return 0;
}

