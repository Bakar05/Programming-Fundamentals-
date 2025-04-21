#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Excellent work!" << endl;
    } else if (score >= 70 && score < 90) {
        cout << "Good job, but there's room for improvement." << endl;
    } else {
        cout << "You need to work harder." << endl;
    }

    return 0;
}
