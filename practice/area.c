#include <stdio.h>

int main(){
    int length ,breadth;
    printf("Enter the length:\n");
    scanf("%d", &length);

    printf("Enter the breadth:\n");
    scanf("%d", &breadth);

    printf("The area of the rectangle is %d\n",length*breadth);
    return 0;
}