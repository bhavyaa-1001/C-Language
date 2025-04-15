#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char type[10]; // "Manager" or "Worker"
};

int main() {
    struct Employee emp[100];
    int n, i;
    FILE *fman, *fwork;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);  // read full name with spaces
        printf("Type (Manager/Worker): ");
        scanf("%s", emp[i].type);
    }

    fman = fopen("managers.txt", "w");
    fwork = fopen("workers.txt", "w");

    if (fman == NULL || fwork == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (strcmp(emp[i].type, "Manager") == 0) {
            fprintf(fman, "ID: %d, Name: %s\n", emp[i].id, emp[i].name);
        } else if (strcmp(emp[i].type, "Worker") == 0) {
            fprintf(fwork, "ID: %d, Name: %s\n", emp[i].id, emp[i].name);
        }
    }

    fclose(fman);
    fclose(fwork);

    printf("\nEmployee data saved to 'managers.txt' and 'workers.txt'.\n");

    return 0;
}
