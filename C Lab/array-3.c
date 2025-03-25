#include <stdio.h>

#define SIZE 10  // Define maximum array size

int main() {
    int arr[SIZE], n;

    printf("Enter the number of elements (max %d): ", SIZE);
    scanf("%d", &n);

    // Check if n exceeds the array bounds
    if (n > SIZE) {
        printf("Error: Array size exceeded!\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements entered successfully.\n");

    return 0;
}
