#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Count duplicates
    for (int i = 0; i < n; i++) {
        int duplicateCount = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                freq[j] = 0; // Mark as counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = duplicateCount;
            if (duplicateCount > 1) count++; // If more than 1 occurrence, it's a duplicate
        }
    }

    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
