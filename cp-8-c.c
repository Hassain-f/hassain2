3#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    char designation[50];
    float basic_salary, hra, da, gross_salary;
};
int main() {
    struct Employee employees[5];
    int i, highest_index = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);
        printf("HRA: ");
        scanf("%f", &employees[i].hra);
        printf("DA: ");
        scanf("%f", &employees[i].da);
        employees[i].gross_salary = employees[i].basic_salary + employees[i].hra + employees[i].da;
        if (employees[i].gross_salary > employees[highest_index].gross_salary) {
            highest_index = i;
        }
    }
    printf("\nEmployee with the highest gross salary:\n");
    printf("ID: %d\n", employees[highest_index].id);
    printf("Name: %s\n", employees[highest_index].name);
    printf("Designation: %s\n", employees[highest_index].designation);
    printf("Gross Salary: %.2f\n", employees[highest_index].gross_salary);
    return 0;
}



