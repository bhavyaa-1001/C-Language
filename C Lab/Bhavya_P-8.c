#include <stdio.h>
#define PI 3.14159

float getDiameter(float radius) {
    return 2 * radius;
}

float getCircumference(float radius) {
    return 2 * PI * radius;
}

float getArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Diameter of the circle: %.2f\n", getDiameter(radius));
    printf("Circumference of the circle: %.2f\n", getCircumference(radius));
    printf("Area of the circle: %.2f\n", getArea(radius));

    return 0;
}
