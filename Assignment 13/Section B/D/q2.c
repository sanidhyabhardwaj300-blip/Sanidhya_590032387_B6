#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;
    struct Employee *ptr;

    ptr = &e;

    printf("Enter Employee ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Employee Name: ");
    scanf("%s", ptr->name);

    printf("Enter Salary: ");
    scanf("%f", &ptr->salary);

    printf("\nCurrent Salary = %.2f\n", ptr->salary);

    printf("Enter new salary: ");
    scanf("%f", &ptr->salary);

    printf("\nEmployee Details:\n");
    printf("ID = %d\n", ptr->id);
    printf("Name = %s\n", ptr->name);
    printf("Modified Salary = %.2f\n", ptr->salary);

    return 0;
}