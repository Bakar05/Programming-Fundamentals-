#include <iostream>
using namespace std;

int main() {
    int rows = 12;

    // Top half of the diamond
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
