#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, name);
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
        cout << "Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student student1;

    cout << "=== Student Fee Management System ===" << endl;

    student1.inputStudent();

    cout << "\nStudent details entered:" << endl;
    student1.displayStatus();

    cout << "\nProcessing a fee payment..." << endl;
    student1.makePayment();

    cout << "\nUpdated fee status:" << endl;
    student1.displayStatus();

    return 0;
}
