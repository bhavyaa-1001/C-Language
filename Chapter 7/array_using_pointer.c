#include <stdio.h>

int main(){
    int marks[] = {78,45,32,4};
    int* ptr = marks;
    
    for(int i = 0;i<4;i++,ptr++){
        printf("The marks at index %d is %d\n",i,marks[i]);
        printf("The marks at index %d is %d\n",i,*ptr);
    }
    return 0;
}