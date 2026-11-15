#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudentData() {
        cout << "Enter student name: ";
        getline(cin, studentName);
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        double amount;
        cout << "Enter payment amount: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid amount. Payment must be greater than zero." << endl;
        } else if (amount > feeBalance) {
            cout << "Payment exceeds the fee balance. Payment rejected." << endl;
        } else {
            feeBalance -= amount;
            cout << "Payment of " << amount << " received successfully." << endl;
        }
    }

    void displayStatus() {
        cout << "\n--- Student Fee Status ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student student1;

    cout << "=== Student Fee Security System ===" << endl;

    student1.inputStudentData();

    student1.makePayment();

    student1.displayStatus();

    return 0;
}
