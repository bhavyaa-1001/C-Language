#include <stdio.h>

int main(){
    int i = 1;
    int n;
    printf("Enter the factorial:\n");
    scanf("%d", &n);

    int product = 1;
    while (i<=n)
    {
        product *= i;
        i++;
    }
    printf("The factorial is %d", product);
    
    return 0;
}