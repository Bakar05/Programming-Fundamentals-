#include <iostream>
using namespace std;

float circleArea(float radius) {
    const float pi = 3.14159;
    return pi * radius * radius;
}

float circleCircumference(float radius) {
    const float pi = 3.14159;
    return 2 * pi * radius;
}

int main() {
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = circleArea(radius);
    float circumference = circleCircumference(radius);

    cout << "Area of the Circle = " << area << endl;
    cout << "Circumference of the Circle = " << circumference << endl;

    return 0;
}
