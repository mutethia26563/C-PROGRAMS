//NAME:MUTETHIA WYCLIFFE KATHUKU
//REG NO:CT101/G/26563/25
//DESCRIPTION:C PROGRAM TO DISPLAY TOTAL OCCUPANCY OF ROOMS IN A HOTEL
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms per floor
    int totalOccupied = 0;
    int branch, floor, room; // Declare loop variables outside the for loops

    srand((unsigned int)time(NULL)); // Seed for random number generation

    // Assign random occupancy and count occupied rooms
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 0 = vacant, 1 = occupied
                totalOccupied += chain[branch][floor][room];
            }
        }
    }

    // Display total occupancy
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}