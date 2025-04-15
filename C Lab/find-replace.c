#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

void replaceWordInFile(const char *filename, const char *oldWord, const char *newWord) {
    FILE *fp, *temp;
    char buffer[MAX_LINE];
    char tempFilename[] = "temp.txt";

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file %s for reading.\n", filename);
        return;
    }

    temp = fopen(tempFilename, "w");
    if (temp == NULL) {
        printf("Could not open temporary file for writing.\n");
        fclose(fp);
        return;
    }

    while (fgets(buffer, MAX_LINE, fp) != NULL) {
        char *pos, tempBuffer[MAX_LINE];
        int index = 0;

        while ((pos = strstr(buffer, oldWord)) != NULL) {
            // Copy characters from start of buffer to start of oldWord
            int len = pos - buffer;
            strncpy(tempBuffer, buffer, len);
            tempBuffer[len] = '\0';

            // Add newWord to tempBuffer
            strcat(tempBuffer, newWord);

            // Add the rest of the original buffer after the oldWord
            strcat(tempBuffer, pos + strlen(oldWord));

            // Copy modified string back to buffer for next replacement
            strcpy(buffer, tempBuffer);
        }
        fputs(buffer, temp);
    }

    fclose(fp);
    fclose(temp);

    // Replace original file with modified one
    remove(filename);
    rename(tempFilename, filename);

    printf("Word replacement successful.\n");
}

int main() {
    char filename[100], oldWord[50], newWord[50];

    printf("Enter filename: ");
    scanf("%s", filename);
    printf("Enter word to find: ");
    scanf("%s", oldWord);
    printf("Enter word to replace with: ");
    scanf("%s", newWord);

    replaceWordInFile(filename, oldWord, newWord);

    return 0;
}
