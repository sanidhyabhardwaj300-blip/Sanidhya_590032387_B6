//Use typedef to define a structure named Student without repeatedly writing the struct keyword. Read and display the details of three student records.
//Store roll number, student name, and CGPA.
#include <stdio.h>
typedef struct {
    int rollNumber;
    char name[30];
    float cgpa;

} Student;
int main() {
    Student students[3];
    for (int i=0; i<3; i++)
    {
        printf("Enter Details for Student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }
    for (int i=0; i<3; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("CGPA: %.2f\n", students[i].cgpa);
        printf("size of student structure: %zu bytes\n", sizeof(students[0]));
    }
    return 0;
}