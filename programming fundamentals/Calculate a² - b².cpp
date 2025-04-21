#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    float result = (a * a) - (b * b);
    cout << "a^2 - b^2 = " << result << endl;

    return 0;
}
