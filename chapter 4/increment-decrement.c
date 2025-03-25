#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n",i);

    //++i - first increment i and then prints it.
    //i++ - first prints i and then increment it.

    printf("The value of i is %d\n",i++);
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",i+=2);
    
    return 0;

}