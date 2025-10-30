//NAME:MUTETHIA WYCLIFFE KATHUKU
//REG NO:CT101/G/26563/25
//DESCRIPTION:1D ARRAY TO STORE REVENUES



#include <stdio.h>

int main() {
    float revenue[7]; // Array to store daily revenues
    float total = 0.0, average;
    int i;

    // Input revenue for each day
    printf("Enter the revenue for each day of the week:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i]; // Accumulate total revenue
    }

    // Calculate average daily revenue
    average = total / 7;

    // Display results
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}