#include <stdio.h>

// Function to compute cube
int cube(int num) {
    return num * num * num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Cube of %d is %d\n", num, cube(num));

    return 0;
}
