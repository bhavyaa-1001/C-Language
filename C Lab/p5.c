#include <stdio.h>

int main(){
    int a=5,b=6;

    printf("Values before swapping are a=%d \t b=%d",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n Values after swapping are a=%d \t b=%d",a,b);

    return 0;

}