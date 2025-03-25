#include <stdio.h>

int factorial(int);

int factorial(int n){
    if(n == 1 || n == 0){//base condition
        return 1;
    }

    return factorial(n-1)*n;
}

int main(){
    int a=11;
    printf("The value of %d factorial is %d\n",a,factorial(a));

    return 0;
}