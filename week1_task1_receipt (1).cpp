#include <iostream>
#include <string>
using namespace std;

int main() {
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone, totalAmount;

    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model purchased: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone (KES): ";
    cin >> pricePerPhone;

    totalAmount = quantity * pricePerPhone;

    cout << endl;
    cout << "=============================" << endl;
    cout << "        SALES RECEIPT        " << endl;
    cout << "=============================" << endl;
    cout << "Customer Name  : " << customerName << endl;
    cout << "Phone Model    : " << phoneModel << endl;
    cout << "Quantity       : " << quantity << endl;
    cout << "Price per Phone: KES " << pricePerPhone << endl;
    cout << "-----------------------------" << endl;
    cout << "Total Amount   : KES " << totalAmount << endl;
    cout << "=============================" << endl;
    cout << "   Thank you for shopping!   " << endl;

    return 0;
}
