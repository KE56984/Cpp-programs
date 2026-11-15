#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double revenue[7];
    double total = 0;
    double average;

    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];
        total += revenue[i];
    }

    average = total / 7;

    cout << fixed << setprecision(2);
    cout << "\nTotal weekly revenue: " << total << endl;
    cout << "Average daily revenue: " << average << endl;

    return 0;
}
