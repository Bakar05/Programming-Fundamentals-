#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, f;

    cout << "Enter value for a: "; cin >> a;
    cout << "Enter value for b: "; cin >> b;
    cout << "Enter value for c: "; cin >> c;
    cout << "Enter value for d: "; cin >> d;
    cout << "Enter value for e: "; cin >> e;
    cout << "Enter value for f: "; cin >> f;

    float sum = a + b + c + d + e + f;
    float subtract = a - b - c - d - e - f;
    float multiply = a * b * c * d * e * f;
    float divide = a / b / c / d / e / f;
    int modulus = (int)sum % 50;

    cout << "\n--- Arithmetic Results ---\n";
    cout << "Sum = " << sum << endl;
    cout << "Subtraction = " << subtract << endl;
    cout << "Multiplication = " << multiply << endl;
    cout << "Division = " << divide << endl;
    cout << "Modulus with 50 = " << modulus << endl;

    return 0;
}
