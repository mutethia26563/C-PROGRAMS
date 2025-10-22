//NAME:MUTETHIA WYCLIFFE KATHUKU
//REG NO: CT101/G/26563/25
//DESCRIPTION:FUNCTION TO CALCULATE FARE OF DISTANCE TRAVELLED
#include <stdio.h>


int calculateFare(int distance);

// Example usage
int main() {
    int distance;
    printf("Enter distance traveled (in kilometers): ");
    scanf("%d", &distance);

    int fare = calculateFare(distance);
    printf("Total fare: KSh. %d\n", fare);

    return 0;
}
// Function to calculate fare based on distance
int calculateFare(int distance) {
    int fareRate = 50; // Fare rate per kilometer in KSh
    int totalFare = distance * fareRate;
    return totalFare;
    }