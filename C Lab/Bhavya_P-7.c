#include <stdio.h>

int cube(int num){
    return num*num*num;
}


int main(){
    int a;
    printf("Enter A Number :");
    scanf("%d",&a);

    printf("Cube of %d is : %d\n",a,cube(a));

    return 0;
}