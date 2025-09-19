//name:mutethia wycliffe kathuku
//reg no:CT101/G/26563/25
#include <stdio.h>
#define PI 3.14159

// Function to calculate volume
float calculate_volume(float radius, float height) {
    return PI * radius * radius * height;
}

// Function to calculate surface area
float calculate_surface_area(float radius, float height) {
    return 2 * PI * radius * radius + 2 * PI * radius * height;
}

int main() {
    float radius, height, volume, surface_area;

    // Prompt user for radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = calculate_volume(radius, height);
    surface_area = calculate_surface_area(radius, height);

    // Output the results
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);

    return 0;
}
