#include <stdio.h>

int main() {
    int amount, notes;
    int denominations[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1}; // Indian currency denominations

    // Input amount
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Count notes for each denomination
    printf("Currency count:\n");
    for (int i = 0; i < 10; i++) {
        notes = amount / denominations[i];
        if (notes > 0) {
            printf("%d x %d\n", denominations[i], notes);
            amount %= denominations[i];
        }
    }

    return 0;
}
