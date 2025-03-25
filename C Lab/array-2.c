#include <stdio.h>

// Function to check if arr2 is a subset of arr1
int isSubset(int arr1[], int size1, int arr2[], int size2) {
    int found;
    for (int i = 0; i < size2; i++) {
        found = 0;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            return 0; // Not a subset
    }
    return 1; // Is a subset
}

int main() {
    int n1, n2;
    
    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    // Check if arr2 is a subset of arr1
    if (isSubset(arr1, n1, arr2, n2))
        printf("Second array is a subset of first array.\n");
    else
        printf("Second array is NOT a subset of first array.\n");

    return 0;
}
