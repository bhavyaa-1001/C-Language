#include <stdio.h>

int main(){
    
    char a;
    double first,second;

    printf("Enter an operator ( + , - , * , / ):\n");
    scanf("%c", &a);
    printf("Enter two opernads: \n");
    scanf("%lf %lf", &first, &second);

    switch(a) {
        case '+':
            printf("The sum is %.1lf + %.1lf = %.1lf" ,first ,second, first + second);
            break;
        case '-':
            printf("The subtraction is %.1lf - %.1lf = %.1lf" ,first ,second, first - second);
            break;
        case '*':
            printf("The multiplication is %.1lf * %.1lf = %.1lf" ,first ,second, first * second);
            break;
        case '/':
            printf("The division is %.1lf / %.1lf = %.1lf" ,first ,second, first / second);
            break;
        
        default:
            printf("ERROR! operator is not correct");
    
    }
    return 0;
}