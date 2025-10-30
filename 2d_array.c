//NAME:MUTETHIA WYCLIFFE KATHUKU
//REG NO:CT101/G/26563/25
//DESCRIPTION:C PROGRAM TO DISPLAY NUMBER OF OCCUPIED ROOMS AND VACANT
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS 10

int main() {
    int occupancy[FLOORS][ROOMS];
    int i, j;
    int occupied, vacant;

    // Seed the random number generator
    srand(time(NULL));

    // Fill the occupancy array with random 0s and 1s
    for (i = 0; i < FLOORS; i++) {
        for (j = 0; j < ROOMS; j++) {
            occupancy[i][j] = rand() % 2; // 0 = vacant, 1 = occupied
        }
    }

    // Display the number of occupied and vacant rooms per floor
    printf("Hotel Room Occupancy Report:\n\n");
    for (i = 0; i < FLOORS; i++) {
        occupied = 0;
        vacant = 0;
        for (j = 0; j < ROOMS; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d ? Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }

    return 0;
}