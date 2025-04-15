#include <stdio.h>
#include <math.h>

int main() {
    float a, r, sum;
    int n;

    printf("Enter the first term (a): ");
    scanf("%f", &a);

    printf("Enter the common ratio (r): ");
    scanf("%f", &r);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (r == 1) {
        sum = a * n;
    } else {
        sum = a * (1 - pow(r, n)) / (1 - r);
    }

    printf("Sum of the geometric series: %.2f\n", sum);

    return 0;
}
