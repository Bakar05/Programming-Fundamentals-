#include <iostream>
using namespace std;

int main() {
    float purchaseAmount, finalPrice;

    cout << "Enter the total purchase amount: ";
    cin >> purchaseAmount;

    float discount = (purchaseAmount > 2000) ? 0.1 : 0;
    finalPrice = purchaseAmount - (discount * purchaseAmount);

    cout << "Final price after discount = " << finalPrice << endl;

    return 0;
}
