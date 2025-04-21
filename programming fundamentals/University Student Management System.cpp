#include <iostream>
using namespace std;

int main() {
    string name, gradeLevel;
    int age;
    float averageScore;

    cout << "Enter Student Name\t\t: ";
    getline(cin, name); 

    cout << "Enter Student Age\t\t: ";
    cin >> age;

    cout << "Enter Grade Level (e.g., A, B, etc.): ";
    cin >> gradeLevel;

    cout << "Enter Average Score\t\t: ";
    cin >> averageScore;

    cout << "\n\t--- Student Information ---\n";
    cout << "Name\t\t: " << name << endl;
    cout << "Age\t\t: " << age << endl;
    cout << "Grade Level\t: " << gradeLevel << endl;
    cout << "Average Score\t: " << averageScore << endl;

    return 0;
}
