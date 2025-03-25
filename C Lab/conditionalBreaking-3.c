#include <stdio.h>

int main() {
    char ch;
    
    // Input character
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    // Convert to lowercase to handle both cases
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

    // Check if it is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
