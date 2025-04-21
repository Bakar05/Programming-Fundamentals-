#include <iostream>
#include <cmath>
using namespace std;

float calculateDistance(int x1, int x2, int y1, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1, x2, y1, y2;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

    float distance = calculateDistance(x1, x2, y1, y2);
    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}
