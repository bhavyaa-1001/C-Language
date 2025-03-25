#include <stdio.h>
#include <ctype.h>

// Function to count vowels and consonants
void countVowelsConsonants(char *str, int *vowelCount, int *consonantCount) {
    while (*str) {
        char ch = tolower(*str);
        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowelCount)++;
            else
                (*consonantCount)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    countVowelsConsonants(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
