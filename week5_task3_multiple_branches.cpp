#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    srand(time(0));

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    cout << "Total occupied rooms across all branches: ";
    cout << totalOccupied << endl;

    return 0;
}
