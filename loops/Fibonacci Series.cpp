#include <iostream>
using namespace std;

int main() {
    int upper_limit, previous = 0, next = 1;
    
    cout << "Enter the upper limit: ";
    cin >> upper_limit;
    
    cout << "Fibonacci series up to " << upper_limit << "\n";
    cout << previous << "\t" << next << "\t";
    
    for (int i = 3; i <= upper_limit; i++) {
        int result = previous + next;
        
        previous = next;
        next = result;
        
        cout << next << "\t";
    }
    return 0;
}