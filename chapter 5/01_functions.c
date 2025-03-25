#include <stdio.h>

//function prototype

int sum(int,int);

//function defination
int sum(int x,int y){
printf("The sum is %d\n", x+y);
return x+y;
}

int main(){
    int a=1,b=2;
    int c = sum(a,b);
              //function call

    int a1=3,b1=2;
    sum(a1,b1);


    return 0;
}
