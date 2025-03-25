#include <stdio.h>
//sum of numbers in multiplication table of 8 is :
int main(){
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum +=(8*i);
    }
    printf("The sum of numbers is %d",sum );
    
    return 0;
}
// answer 8 is in  projects
