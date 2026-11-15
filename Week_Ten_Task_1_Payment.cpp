#include <iostream>
using namespace std;

class Payment {
public:
    void processPayment(int amount) {
        cout << "\n--- Cash Payment ---" << endl;
        cout << "Amount: " << amount << endl;
        cout << "Final payment amount: " << amount << endl;
    }

    void processPayment(double amount, double fee) {
        double total = amount + fee;
        cout << "\n--- Card Payment ---" << endl;
        cout << "Amount: " << amount << endl;
        cout << "Transaction fee: " << fee << endl;
        cout << "Final payment amount: " << total << endl;
    }

    void processPayment(double amount, double fee, double discount) {
        double total = amount + fee - discount;
        cout << "\n--- Mobile Payment ---" << endl;
        cout << "Amount: " << amount << endl;
        cout << "Transaction fee: " << fee << endl;
        cout << "Discount: " << discount << endl;
        cout << "Final payment amount: " << total << endl;
    }
};

int main() {
    Payment payment1;

    cout << "=== Payment System ===" << endl;

    payment1.processPayment(5000);

    payment1.processPayment(5000.0, 50.0);

    payment1.processPayment(5000.0, 30.0, 100.0);

    return 0;
}
