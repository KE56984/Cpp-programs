#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string holderName;
    string accountNumber;
    double balance;

public:
    BankAccount(string name, string accNo, double bal) {
        holderName = name;
        accountNumber = accNo;
        balance = bal;
        cout << "Account successfully created" << endl;
    }

    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << holderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << balance << endl;
    }

    ~BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }
};

int main() {
    cout << "=== Bank Account System ===" << endl;

    BankAccount account1("John Kamau", "ACC1001", 25000);

    account1.displayAccount();

    return 0;
}
