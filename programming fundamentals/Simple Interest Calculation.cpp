#include <iostream>
using namespace std;

float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time;
    
    // Input values
    cout << "Enter Principal: ";
    cin >> principal;
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    float interest = simpleInterest(principal, rate, time);
    cout << "Simple Interest = " << interest << endl;

    return 0;
}
