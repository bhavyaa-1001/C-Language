#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char ch, prev = '\0';
    int totalLines = 0, blankLines = 0, commentLines = 0;
    int isBlank = 1, inMultilineComment = 0;
    char filename[100];

    printf("Enter the filename (e.g., source.c): ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            totalLines++;
            if (isBlank)
                blankLines++;
            isBlank = 1;
        } else if (ch != ' ' && ch != '\t' && ch != '\r') {
            isBlank = 0;
        }

        // Detect single-line comment
        if (!inMultilineComment && prev == '/' && ch == '/') {
            commentLines++;
            while ((ch = fgetc(fp)) != EOF && ch != '\n');
            totalLines++;
            commentLines++;
            isBlank = 1;
        }

        // Detect start of multi-line comment
        if (!inMultilineComment && prev == '/' && ch == '*') {
            commentLines++;
            inMultilineComment = 1;
        }

        // Detect end of multi-line comment
        if (inMultilineComment && prev == '*' && ch == '/') {
            inMultilineComment = 0;
        }

        prev = ch;
    }

    fclose(fp);

    printf("\n--- FILE ANALYSIS ---\n");
    printf("Total lines    : %d\n", totalLines);
    printf("Blank lines    : %d\n", blankLines);
    printf("Comment lines  : %d\n", commentLines);

    return 0;
}
