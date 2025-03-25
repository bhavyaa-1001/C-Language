#include <stdio.h>

int main(){
    double n;
    printf("Enter the factorial:\n");
    scanf("%lf", &n);

    double product = 1;
    for (double i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial is %lf", product);
    
    return 0;
}