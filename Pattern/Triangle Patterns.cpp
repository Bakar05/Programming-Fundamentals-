#include <iostream>
using namespace std;

int main() {
    int rows;
    
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Increasing Triangle:" << endl;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nDecreasing Triangle:" << endl;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i + 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}