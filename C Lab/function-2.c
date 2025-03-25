#include <stdio.h>
#define PI 3.14159

// Function to calculate diameter
double diameter(double radius) {
    return 2 * radius;
}

// Function to calculate circumference
double circumference(double radius) {
    return 2 * PI * radius;
}

// Function to calculate area
double area(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Diameter: %.2lf\n", diameter(radius));
    printf("Circumference: %.2lf\n", circumference(radius));
    printf("Area: %.2lf\n", area(radius));

    return 0;
}
