//Define a Date structure containing day, month, and year. Place it inside an Employee structure containing the employee name, employee ID, salary, and date of joining.
//Read and display three employee details.
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int employeeID;
    float salary;
    struct Date dateOfJoining;
};
int main() {
    struct Employee employees[3];
    for (int i=0; i<3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Date of Joining (day month year): ");
        scanf("%d %d %d", &employees[i].dateOfJoining.day, &employees[i].dateOfJoining.month, &employees[i].dateOfJoining.year);
    }
    printf("\nEmployee Details:\n");
    for (int i=0; i<3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Employee ID: %d\n", employees[i].employeeID);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Date of Joining: %02d/%02d/%04d\n", employees[i].dateOfJoining.day, employees[i].dateOfJoining.month, employees[i].dateOfJoining.year);
    }
    return 0;
}

