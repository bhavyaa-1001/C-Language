#include <stdio.h>

int sum_natural(int);

int sum_natural(int n){
    if(n==1){
        return 1;
    }   
    return sum_natural(n-1) + n;
}
int main(){
    printf("The sum of first 10 natural numbers is %d",sum_natural(10));
    return 0;
}