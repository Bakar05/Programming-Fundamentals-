#include <iostream>
#include <string>
using namespace std;

int main() {
    double initialGrade, finalGrade;
    string participated;

    cout << "Enter the student's initial grade (0-100): ";
    cin >> initialGrade;
    cout << "Did the student participate in extra-curricular activities? (yes/no): ";
    cin >> participated;

    finalGrade = (participated == "yes" ? initialGrade * 1.05 : initialGrade);
    finalGrade = (finalGrade > 100 ? 100 : finalGrade); 

    cout << "The student's final grade, after considering extra-curricular activities, is: " << finalGrade << endl;

    return 0;
}
