//Name:mutethia wycliffe kathuku
//Reg No:CT101/G/26563/25
//Description:UNITS OF WATER USED AND AMOUNT TO BE PAID
#include<stdio.h>


int main() {
    int units;
    float bill;

    // Prompt user for input
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    // Calculate bill using if–else if–else
    if (units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    // Display the total bill
    printf("Total bill: %.2f KES\n", bill);

    return 0;
}