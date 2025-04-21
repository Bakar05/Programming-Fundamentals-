#include <iostream>
using namespace std;

float calculateGrade(float exam_score, float project_score, float attendance_score) {
    return (exam_score * 0.5) + (project_score * 0.3) + (attendance_score * 0.2);
}

int main() {
    float exam_score, project_score, attendance_score;

    cout << "Enter the exam score (out of 100): ";
    cin >> exam_score;
    cout << "Enter project score (out of 100): ";
    cin >> project_score;
    cout << "Enter attendance score (out of 100): ";
    cin >> attendance_score;

    float final_grade = calculateGrade(exam_score, project_score, attendance_score);
    cout << "Final grade of the student is: " << final_grade << endl;

    return 0;
}
