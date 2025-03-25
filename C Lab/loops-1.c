#include <stdio.h>
#include <math.h>

// Function to evaluate a polynomial ax^n + bx^(n-1) + ... + c
double evaluatePolynomial(double coeffs[], int degree, double x) {
    double result = 0;
    for (int i = 0; i <= degree; i++) {
        result += coeffs[i] * pow(x, degree - i);
    }
    return result;
}

int main() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    double coeffs[degree + 1];
    printf("Enter the coefficients (from highest to lowest degree):\n");
    for (int i = 0; i <= degree; i++) {
        scanf("%lf", &coeffs[i]);
    }

    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Polynomial value at x = %.2lf is: %.2lf\n", x, evaluatePolynomial(coeffs, degree, x));
    return 0;
}
