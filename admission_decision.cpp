#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age, score;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> score;

    cout << "\nStudent Name: " << studentName << endl;

    if (age >= 18) {
        if (score >= 50) {
            cout << "Admission Decision: Admitted" << endl;
        } else {
            cout << "Admission Decision: Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Admission Decision: Not Admitted: Underage" << endl;
    }

    return 0;
}
