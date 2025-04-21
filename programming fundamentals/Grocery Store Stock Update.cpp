#include <iostream>
using namespace std;

void current_stock_quantities(int apples, int bananas, int oranges) {
    apples -= 10;
    bananas -= 5;
    oranges -= 8;

    cout << "\n--- Updated Stock ---" << endl;
    cout << "Apples  : " << apples << endl;
    cout << "Bananas : " << bananas << endl;
    cout << "Oranges : " << oranges << endl;
}

int main() {
    int apples, bananas, oranges;

    cout << "Enter apples in stock: ";
    cin >> apples;

    cout << "Enter bananas in stock: ";
    cin >> bananas;

    cout << "Enter oranges in stock: ";
    cin >> oranges;

    current_stock_quantities(apples, bananas, oranges);
    return 0;
}
