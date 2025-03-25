#include <stdio.h>

int main(){
    
    for(int i =0;i<15; i++)
    {
        if(i==5){
            break;//enxit the loop now
        }
        printf("The value of i is %d\n",i);
    }
    return 0;
}