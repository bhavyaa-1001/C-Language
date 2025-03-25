#include <stdio.h>

//convert celcius to farenheit

int main(){
    double celcius , fahrenheit;

    printf("Enter the tempurature in celcius:\n");
    scanf("%lf",&celcius);

    fahrenheit = (celcius * 9) / 5 + 32;

    printf("The temperature in fahrenheit is : %.2lf \n",fahrenheit);
    
    return 0;
}