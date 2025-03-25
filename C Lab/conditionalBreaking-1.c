#include <stdio.h>

int main() {
    float basic_salary, hra, da, gross_salary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate HRA and DA based on given conditions
    if (basic_salary <= 10000) {
        hra = 0.20 * basic_salary;
        da = 0.80 * basic_salary;
    } else if (basic_salary <= 20000) {
        hra = 0.25 * basic_salary;
        da = 0.90 * basic_salary;
    } else {
        hra = 0.30 * basic_salary;
        da = 0.95 * basic_salary;
    }

    // Calculate Gross Salary
    gross_salary = basic_salary + hra + da;

    // Display Gross Salary
    printf("Gross Salary = %.2f\n", gross_salary);

    return 0;
}
