#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *src, *dest;
    char ch;

    if (argc != 3) return 1;

    src = fopen(argv[1], "r");
    if (src == NULL) return 1;

    dest = fopen(argv[2], "w");
    if (dest == NULL) {
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);
    return 0;
}
