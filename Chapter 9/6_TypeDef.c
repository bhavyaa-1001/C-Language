#include <stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];

}Emp;

int main(){
    //  typedef int bhavya;
    //  bhavya a = 77;
    //  printf("The vale of a is %d\n",a);

      Emp e1,e2;
    e1.code = 5050;
    strcpy( e1.name,"Bhavya");
    e1.salary = 54.23;

    printf("%d %f %s",e1.code,e1.salary,e1.name);  
    return 0;
}