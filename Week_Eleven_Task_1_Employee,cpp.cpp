#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string employeeName;
    string employeeID;
    double basicSalary;
    double netSalary;

public:
    void setEmployeeDetails() {
        cout << "Enter employee name: ";
        getline(cin, employeeName);
        cout << "Enter employee ID: ";
        getline(cin, employeeID);
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        netSalary = basicSalary + 0.10 * basicSalary;
    }

    void displayEmployeeDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Employee employee1;

    cout << "=== Employee Data Protection System ===" << endl;

    employee1.setEmployeeDetails();

    employee1.calculateSalary();

    employee1.displayEmployeeDetails();

    return 0;
}
