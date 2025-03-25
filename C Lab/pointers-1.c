#include <stdio.h>
#include <string.h>

// Function to swap characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations
void permute(char *str, int left, int right) {
    if (left == right)
        printf("%s\n", str);
    else {
        for (int i = left; i <= right; i++) {
            swap((str + left), (str + i));
            permute(str, left + 1, right);
            swap((str + left), (str + i)); // Backtrack
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    printf("Permutations:\n");
    permute(str, 0, n - 1);
    return 0;
}
