//Name:mutethia wycliffe kathuku
//Reg no:CT101/G/26563/25
//Description:c program for loan application

#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt user for income
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}