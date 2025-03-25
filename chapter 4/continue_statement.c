#include <stdio.h>

int main(){
    
    for(int i =0;i<15; i++)
    {
        if(i==5){
            continue;//skip this iteration
        }
        printf("The value of i is %d\n",i);
    }
    printf("For loop is done!!\n");
    return 0;
}