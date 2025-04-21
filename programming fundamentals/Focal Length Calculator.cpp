#include <iostream>
using namespace std;

int main() {
    float p, q, focal_length;

    cout << "Enter the distance of image from the lens (Q): ";
    cin >> q;
    cout << "Enter the distance of object from the lens (P): ";
    cin >> p;

    if (q == 0 || p == 0) {
        cout << "Neither P nor Q can be zero.\n";
    } else {
        focal_length = 1 / ((1 / p) + (1 / q));
        cout << "Focal Length = " << focal_length << endl;
    }

    return 0;
}
