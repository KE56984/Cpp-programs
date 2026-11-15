#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int occupancy[5][10];

    srand(time(0));

    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0;
        int vacant = 0;

        for (int room = 0; room < 10; room++) {
            cout << occupancy[floor][room] << " ";

            if (occupancy[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        cout << "\nFloor " << floor + 1 << ": ";
        cout << "Occupied rooms = " << occupied;
        cout << ", Vacant rooms = " << vacant << endl << endl;
    }

    return 0;
}
