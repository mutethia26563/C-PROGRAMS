//NAME:MUTETHIA WYCLIFFE KATHUKU
//REG NO:CT101/G/26563/25
//DESCRIPTION:PROGRAM TO ENTER PASSWORD
#include <stdio.h>
#include <string.h>

int main() {
    char password[10];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}

