#include <stdio.h>

// Recursive function for Hailstone sequence
void hailstone(int n) {
    printf("%d ", n);
    if (n == 1)
        return;
    if (n % 2 == 0)
        hailstone(n / 2);
    else
        hailstone(3 * n + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Hailstone sequence: ");
    hailstone(num);
    printf("\n");
    
    return 0;
}
