#include <stdio.h>

void main(){
    int a=5,b=6,t=a;

    printf("Values before swapping are a=%d \t b=%d",a,b);
    
    a=b;
    b=t;
    printf("\n Values after swapping are a=%d \t b=%d",a,b);

    
}