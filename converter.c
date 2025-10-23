/*NAME:MUTETHIA WYCLIFFE KATHUKU
REG NO:CT101/G/26563/25
DESCRIPTION:FUNCTION TO CONVERT FAHRENHEIT TO CELCIUS
*/
#include <stdio.h>
float convertToCelsius(float fahrenheit);

// Example usage
int main() {
    float fahrenheit = 98.6;
    float celsius = convertToCelsius(fahrenheit);
    printf("%.2f°F is %.2f°C\n", fahrenheit, celsius);
    return 0;
}
// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}