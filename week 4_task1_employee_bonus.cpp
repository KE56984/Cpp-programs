#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter employee " << i << " name: ";
        getline(cin, name);

        cout << "Enter basic salary: ";
        cin >> basicSalary;
        cin.ignore();

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << "\nEmployee Report" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
        cout << "--------------------------" << endl;
    }

    return 0;
}
