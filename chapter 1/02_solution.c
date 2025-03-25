#include <stdio.h>

//calculate area of the circle

int main(){
    float radius , area , pie=3.14;
    printf("Enter the Radius of the cirlce \n");
    scanf("%f",&radius);

    area = pie * radius * radius;

    printf("The area of the circle is %f\n",area);
    return 0;
}