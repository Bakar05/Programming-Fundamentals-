#include <iostream>
using namespace std;

float calculateTotal(float subtotal, float discount_rate) {
    float discounted_amount = subtotal * (discount_rate / 100);
    float discounted_total = subtotal - discounted_amount;
    const float tax_rate = 16.0;
    float tax = discounted_total * (tax_rate / 100);

    return discounted_total + tax;
}

int main() {
    float subtotal, discount_rate;

    cout << "Enter the subtotal of the items in the cart: ";
    cin >> subtotal;
    cout << "Enter the discount rate (as a percentage): ";
    cin >> discount_rate;

    float total_cost = calculateTotal(subtotal, discount_rate);
    cout << "The total cost after applying the discount and adding 16% tax is: " << total_cost << " rupees." << endl;

    return 0;
}
