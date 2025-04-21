#include <iostream>
using namespace std;

int main() {
    int num, reversedNumber = 0, remainder;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
    
    cout << "Reversed Number: " << reversedNumber << endl;
    return 0;
}