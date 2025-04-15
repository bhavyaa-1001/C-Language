#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr (combination formula)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        // Printing leading spaces for formatting
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }
        
        // Printing the numbers using combination formula
        for (int j = 0; j <= i; j++) {
            printf("%4d", combination(i, j));
        }
        
        printf("\n"); // Move to next line
    }
}

int main() {
    int rows;
    
    // Taking user input
    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    
    // Printing Pascal's Triangle
    printPascalTriangle(rows);
    
    return 0;
}
