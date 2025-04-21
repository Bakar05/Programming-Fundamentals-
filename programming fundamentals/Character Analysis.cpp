#include <iostream>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
           ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
           ch == 'u' || ch == 'U';
}

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

int main() {
    char character;
    int choice;
    
    do {
        cout << "Enter a character: ";
        cin >> character;
        
        if (isVowel(character)) {
            cout << character << " is a vowel." << endl;
        } else if (isDigit(character)) {
            cout << character << " is a digit." << endl;
        } else {
            cout << character << " is neither a vowel nor a digit." << endl;
        }

        cout << "Select an option: \n1. Start the program\n2. Exit\n";
        cin >> choice;
    } while (choice == 1);

    return 0;
}
