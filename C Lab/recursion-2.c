#include <stdio.h>

// Recursive function to calculate power
double power(double base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main() {
    double base;
    int exp;
    
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    printf("%.2lf^%d = %.2lf\n", base, exp, power(base, exp));
    return 0;
}
