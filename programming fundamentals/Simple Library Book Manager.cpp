#include <iostream>
using namespace std;

int main() {
    string title, author;
    int publicationYear, pages;

    cout << "Enter Book Title: ";
    cin.ignore(); 
    getline(cin, title);

    cout << "Enter Author Name: ";
    getline(cin, author);

    cout << "Enter Publication Year: ";
    cin >> publicationYear;

    cout << "Enter Number of Pages: ";
    cin >> pages;

    cout << "\n\t--- Book Information ---\n";
    cout << "Title\t\t\t: " << title << endl;
    cout << "Author\t\t\t: " << author << endl;
    cout << "Publication Year\t: " << publicationYear << endl;
    cout << "Number of Pages\t\t: " << pages << endl;

    return 0;
}
