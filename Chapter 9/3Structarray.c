#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];

};


int main(){
    struct employee facebook[100];
    //we can access the data using :
    facebook[0].code = 100;
    facebook[1].code = 75;

    struct employee bhavya = {100,78,"bhavya"};
    printf("%d %f %s", bhavya.code,bhavya.salary,bhavya.name);
    return 0;
}