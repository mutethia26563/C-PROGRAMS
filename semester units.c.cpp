//name:mutethia wycliffe kathuku
//Reg no:CT101/G/26563/25
//description:c program to display semester units
#include <stdio.h>

#define NUM_UNITS 8

// Function to display semester units
void displaySemesterUnits() {
    const char *units[NUM_UNITS] = {
        "1. Introduction to Computer Architecture",
        "2. Analogue Electronics",
        "3. Fundamentals of ICT",
        "4. Communication Skills",
        "5. Discrete Maths",
        "6. Mathematics for Science",
        "7. Physics",
        "8. Introduction to Programming and Problem Solving"
    };

    printf("?? Units for This Semester:\n");
    for (int i = 0; i < NUM_UNITS; i++) {
        printf("%s\n", units[i]);
    }
    printf("\n");
}

int main() {
    float height;
    double bankBalance;
    char phoneNumber[20]; // Enough to hold country code + number

    // Display semester units
    displaySemesterUnits();

    // Prompt user for personal details
    printf("Please enter your height in meters: ");
    scanf("%f", &height);

    printf("Please enter your bank balance: ");
    scanf("%lf", &bankBalance);

    printf("Please enter your phone number: ");
    scanf("%s", phoneNumber);

    // Display entered information
    printf("\n? Your Details:\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: %.2f\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}