#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int marks;
    char grade;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Please enter a mark between 0 and 100." << endl;
    } else {
        if (marks >= 70) {
            grade = 'A';
        } else if (marks >= 60) {
            grade = 'B';
        } else if (marks >= 50) {
            grade = 'C';
        } else if (marks >= 40) {
            grade = 'D';
        } else {
            grade = 'E';
        }

        cout << "\nStudent Name: " << studentName << endl;
        cout << "Exam Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }

    return 0;
}
