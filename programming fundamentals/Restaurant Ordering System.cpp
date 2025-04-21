#include <iostream>
using namespace std;

int main() {
    int category, item;
    char anotherOrder;

    do {
        cout << "Menu Categories:\n";
        cout << "1. Appetizers\n";
        cout << "2. Main Courses\n";
        cout << "3. Desserts\n";
        cout << "4. Beverages\n";
        cout << "Select a category: ";
        cin >> category;

        switch(category) {
            case 1:
                cout << "Appetizers:\n1. Garlic Bread\n2. Caesar Salad\n3. Onion Rings\n";
                cout << "Select an item: ";
                cin >> item;
                switch(item) {
                    case 1: cout << "You have ordered: Appetizers - Garlic Bread\n"; break;
                    case 2: cout << "You have ordered: Appetizers - Caesar Salad\n"; break;
                    case 3: cout << "You have ordered: Appetizers - Onion Rings\n"; break;
                    default: cout << "Invalid item.\n";
                }
                break;
            case 2:
                cout << "Main Courses:\n1. Salmon\n2. Mutton Curry\n3. Lasagna\n";
                cout << "Select an item: ";
                cin >> item;
                switch(item) {
                    case 1: cout << "You have ordered: Main Course - Salmon\n"; break;
                    case 2: cout << "You have ordered: Main Course - Mutton Curry\n"; break;
                    case 3: cout << "You have ordered: Main Course - Lasagna\n"; break;
                    default: cout << "Invalid item.\n";
                }
                break;
            case 3:
                cout << "Desserts:\n1. Cheesecake\n2. Chocolate Mousse\n3. Apple Pie\n";
                cout << "Select an item: ";
                cin >> item;
                switch(item) {
                    case 1: cout << "You have ordered: Dessert - Cheesecake\n"; break;
                    case 2: cout << "You have ordered: Dessert - Chocolate Mousse\n"; break;
                    case 3: cout << "You have ordered: Dessert - Apple Pie\n"; break;
                    default: cout << "Invalid item.\n";
                }
                break;
            case 4:
                cout << "Beverages:\n1. Coffee\n2. Tea\n3. Lemonade\n";
                cout << "Select an item: ";
                cin >> item;
                switch(item) {
                    case 1: cout << "You have ordered: Beverage - Coffee\n"; break;
                    case 2: cout << "You have ordered: Beverage - Tea\n"; break;
                    case 3: cout << "You have ordered: Beverage - Lemonade\n"; break;
                    default: cout << "Invalid item.\n";
                }
                break;
            default:
                cout << "Invalid category selected.\n";
        }

        cout << "Do you want to place another order? (y/n): ";
        cin >> anotherOrder;
    } while (anotherOrder == 'y' || anotherOrder == 'Y');

    return 0;
}
