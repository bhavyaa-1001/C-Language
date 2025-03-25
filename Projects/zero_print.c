#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float n,i,j;
    printf("Enter the size :\n");
    scanf("%f",&n);

    for(j=n;j>-n;j--){
        for(i=-n;i<n;i=i+0.75){
            if(pow(i,2) + pow(j,2)<=pow(n,2) && pow(i,2)+pow(j,2)>=pow(n/2,2))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}