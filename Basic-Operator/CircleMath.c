#include <stdio.h>
#define pi 3.1416
int main() {
    float radius, diameter, circumference, area;
    // const float PI = 3.1416; // const keyword use

    printf("Enter radius: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    
    printf("Diameter = %.0f units\n", diameter);
    printf("Circumference = %.2f units\n", circumference);
    printf("Area = %.0f sq. units\n", area);
    
    return 0;
}