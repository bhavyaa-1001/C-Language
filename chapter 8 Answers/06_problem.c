#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Ohduqlqj#iurp#Klvwrulfdo#Fdvh#Vwxglhv";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 3;
    }
        
        printf("%s", str);
    return 0;
}