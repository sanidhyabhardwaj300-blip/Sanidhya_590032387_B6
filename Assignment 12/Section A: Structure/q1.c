//Define a structure named Student containing the roll number, student name, and marks in three subjects. Write a C program to read one student record and display the total marks, average marks, and grade.
#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks[3];
};

int main() {
    int totalMarks = 0;
    float averageMarks = 0;
    char grade;
    struct Student student;
    

    printf("Enter roll Number:\n");
    scanf("%d", &student.rollNumber);
    printf("Enter name:\n");
    scanf("%s", student.name);
    printf("Enter marks in three subjects:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &student.marks[i]);
        totalMarks += student.marks[i];
    }
    averageMarks = totalMarks / 3.0;

    if (averageMarks >= 80) {
        grade = 'A';
    } else if (averageMarks >= 70) {
        grade = 'B';
    } else if (averageMarks >= 60) {
        grade = 'C';
    } else if (averageMarks >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Grade: %c\n", grade);

    return 0;
}