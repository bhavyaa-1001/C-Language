#include <stdio.h>

int main(){
    int n , i = 1;
    printf("Enter a number n:\n",n);
    scanf("%d", &n);

    do{
        printf("%d\n",i);
        i++;

    }while(i<=n);

    return 0;
}