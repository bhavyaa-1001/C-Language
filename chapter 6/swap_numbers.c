#include <stdio.h>
int swap(int* a , int* b);

int swap(int* a , int* b){
    int temp;
    temp = *a;
    *a=*b;
    *b = temp;
}
int main(){
    int a = 4,b=6;
    swap(&a,&b);
    printf("The value of a is %d\n and the value of b is %d",a,b);
    return 0;
}