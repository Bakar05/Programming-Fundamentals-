#include <iostream>
using namespace std;

int main() {
    int number, evenCount = 0, oddCount = 0;
    
    do {
        cout << "Enter an integer (enter 0 to end): ";
        cin >> number;
        
        if (number != 0) {
            if (number % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    } while (number != 0);
    
	cout << "Number of even integers entered: " << evenCount << endl;
    cout << "Number of odd integers entered: " << oddCount << endl;
    return 0;
}