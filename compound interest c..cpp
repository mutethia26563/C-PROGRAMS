//Name:mutethia wycliffe kathuku
//Reg no:CT101/G/26563/25
//Description:c program to find compound interest

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compoundInterest;
    int n;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter number of times interest applied per year: ");
    scanf("%d", &n);

    // Calculate Compound Amount
    amount = principal * pow((1 + rate / (100 * n)), n * time);

    // Compound Interest = Final Amount - Principal
    compoundInterest = amount - principal;

    // Display result
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Final Amount = %.2f\n", amount);

    return 0;
}
