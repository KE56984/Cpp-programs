#include <iostream>
using namespace std;

int main() {
    double balance, withdrawalAmount;
    char choice;

    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "Enter amount to withdraw: ";
        cin >> withdrawalAmount;

        if (withdrawalAmount > balance) {
            cout << "Insufficient balance. Withdrawal stopped." << endl;
            break;
        }

        if (withdrawalAmount <= 0) {
            cout << "Enter a valid withdrawal amount." << endl;
            continue;
        }

        balance = balance - withdrawalAmount;
        cout << "Remaining balance: " << balance << endl;

        if (balance == 0) {
            cout << "Your balance is zero." << endl;
            break;
        }

        cout << "Do you want to make another withdrawal? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    cout << "Thank you for using the savings withdrawal system." << endl;
    return 0;
}
