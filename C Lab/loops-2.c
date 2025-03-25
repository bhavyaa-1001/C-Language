#include <stdio.h>
#include <string.h>

// Function to compute two's complement
void twosComplement(char binary[]) {
    int len = strlen(binary);
    int i;
    
    // Find first '1' from the right
    for (i = len - 1; i >= 0; i--) {
        if (binary[i] == '1')
            break;
    }

    // If no '1' found, return as it is (all 0s case)
    if (i == -1) {
        printf("Two's complement: %s\n", binary);
        return;
    }

    // Flip bits before first '1'
    for (i = i - 1; i >= 0; i--) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }

    printf("Two's complement: %s\n", binary);
}

int main() {
    char binary[20];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);

    twosComplement(binary);

    return 0;
}
