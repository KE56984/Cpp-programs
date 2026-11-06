#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Change this rate if the company uses a different overtime rate.
const double OVERTIME_RATE = 200.0;

string employeeName;
double basicSalary, overtimeHours;
double overtimePay, netSalary;

void getEmployeeDetails() {
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

void calculateOvertimePay() {
    overtimePay = overtimeHours * OVERTIME_RATE;
}

void calculateNetSalary() {
    netSalary = basicSalary + overtimePay;
}

void displayPayslip() {
    cout << "\n========== EMPLOYEE PAYSLIP ==========" << endl;
    cout << "Employee Name: " << employeeName << endl;
    cout << fixed << setprecision(2);
    cout << "Basic Salary: KSh " << basicSalary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Rate: KSh " << OVERTIME_RATE << " per hour" << endl;
    cout << "Overtime Pay: KSh " << overtimePay << endl;
    cout << "Net Salary: KSh " << netSalary << endl;
    cout << "======================================" << endl;
}

int main() {
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();

    return 0;
}
