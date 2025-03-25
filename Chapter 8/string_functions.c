#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "Bhavya";
    char s1[56] = "Hello";
    char s2[56] = " Bro";

    printf("%d\n", strlen(st));
    char target[30];
    strcpy(target, st);
    printf("%s %s",st,target);

    strcat(s1,s2);
    printf("%s  %s",s1,s2);

    int a = strcmp("far","joke");
    printf("%d",a);
    
    return 0;
}