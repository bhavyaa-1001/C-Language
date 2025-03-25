#include <stdio.h>
#include <math.h>

// Recursive function for log base N
int logBaseN(int num, int base) {
    if (num < base)
        return 0;
    return 1 + logBaseN(num / base, base);
}

int main() {
    int num, base;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the base: ");
    scanf("%d", &base);

    if (num <= 0 || base <= 1) {
        printf("Invalid input!\n");
        return 0;
    }

    printf("Log base-%d of %d is: %d\n", base, num, logBaseN(num, base));
    return 0;
}
