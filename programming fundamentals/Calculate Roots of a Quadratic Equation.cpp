#include <iostream>
#include <cmath>
using namespace std;

void quadraticRoots(int a, int b, int c) {
    int discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct.\nRoot 1 = " << root1 << "\nRoot 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        float root = -b / (2 * a);
        cout << "The roots are real and equal.\nRoot = " << root << endl;
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex.\n";
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i\n";
    }
}

int main() {
    int a, b, c;

    cout << "Enter coefficients a, b, c of the quadratic equation (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    quadraticRoots(a, b, c);

    return 0;
}
