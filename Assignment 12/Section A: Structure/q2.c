//Store the details of n students using an array of structures. Calculate the average marks of every student and display the student with the highest average.
//If two or more students have the same highest average, display all such students.
#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks[3];
    float average;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    float highestAverage = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks in three subjects:\n");
        float totalMarks = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
            totalMarks += students[i].marks[j];
        }
        students[i].average = totalMarks / 3.0;
        if (students[i].average > highestAverage) {
            highestAverage = students[i].average;
        }
    }

    printf("\nStudent(s) with the highest average marks:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].average == highestAverage) {
            printf("Roll Number: %d, Name: %s, Average Marks: %.2f\n",
                   students[i].rollNumber, students[i].name, students[i].average);
        }
    }

    return 0;
 
}