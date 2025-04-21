#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500 are:" << endl;
    
    for (int num = 1; num <= 500; num++) {
        int originalNum = num;
        int sum = 0;
        
        while (originalNum != 0) {
            int digit = originalNum % 10;
            
            sum += digit * digit * digit;
            
            originalNum /= 10;
        }
        
        if (sum == num) {
            cout << num << endl;
        }
    }
    return 0;
}