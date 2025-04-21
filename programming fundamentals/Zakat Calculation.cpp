#include <iostream>
#include <string>
using namespace std;

double calculateZakat(double cash, double goldOwned, double silverOwned, double investmentValue, double goldPrice, double silverPrice, string nisabMethod) {
    double valueOfGold = goldOwned * goldPrice;
    double valueOfSilver = silverOwned * silverPrice;
    double totalWealth = cash + valueOfGold + valueOfSilver + investmentValue;

    double nisabValue;
    if (nisabMethod == "gold") {
        nisabValue = 60 * goldPrice;
    } else if (nisabMethod == "silver") {
        nisabValue = 150 * silverPrice;
    } else {
        cout << "Invalid Nisab method." << endl;
        return 0;
    }

    if (totalWealth >= nisabValue) {
        return totalWealth * 0.025;
    } else {
        return 0;
    }
}

int main() {
    double cash, goldOwned, silverOwned, investmentValue, goldPrice, silverPrice;
    string nisabMethod;

    cout << "Enter cash in hand and bank accounts: ";
    cin >> cash;
    cout << "Enter the amount of gold you own (in grams): ";
    cin >> goldOwned;
    cout << "Enter the amount of silver you own (in grams): ";
    cin >> silverOwned;
    cout << "Enter your investment value: ";
    cin >> investmentValue;
    cout << "Enter the market value of gold per gram: ";
    cin >> goldPrice;
    cout << "Enter the market value of silver per gram: ";
    cin >> silverPrice;
    cout << "Choose the Nisab method (gold/silver): ";
    cin >> nisabMethod;

    double zakatPayable = calculateZakat(cash, goldOwned, silverOwned, investmentValue, goldPrice, silverPrice, nisabMethod);

    cout << "Zakat payable: " << zakatPayable << " rupees" << endl;

    return 0;
}
