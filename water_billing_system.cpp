#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Change this rate if the water company charges a different amount.
const double RATE_PER_UNIT = 50.0;

string customerName;
double unitsConsumed;
double totalBill, discount, amountPayable;

void getCustomerDetails() {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

void calculateBill() {
    totalBill = unitsConsumed * RATE_PER_UNIT;
}

void applyDiscount() {
    if (unitsConsumed > 100) {
        discount = totalBill * 0.10;
    } else {
        discount = 0;
    }

    amountPayable = totalBill - discount;
}

void displayBill() {
    cout << "\n========== WATER BILL ==========" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << fixed << setprecision(2);
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Rate Per Unit: KSh " << RATE_PER_UNIT << endl;
    cout << "Total Bill: KSh " << totalBill << endl;
    cout << "Discount: KSh " << discount << endl;
    cout << "Amount Payable: KSh " << amountPayable << endl;
    cout << "================================" << endl;
}

int main() {
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}
