// Define a Student structure containing roll number, name, marks in three subjects, and grade. Demonstrate passing a structure by value and passing it by reference.
//Write displayStudent(struct Student s), totalMarks(struct Student s), and updateGrade(struct Student *s, char newGrade).
//Scolorship
#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks[3];
    char grade;
};
void displayStudent(struct Student s) {
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Marks in three subjects: %.2f, %.2f, %.2f\n", s.marks[0], s.marks[1], s.marks[2]);
    printf("Grade: %c\n", s.grade);
}
float totalMarks(struct Student s) {
    return s.marks[0] + s.marks[1] + s.marks[2];
}
void updateGrade(struct Student *s, char newGrade) {
    s->grade = newGrade;
}
int main() {
    struct Student student;
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter marks in three subjects: ");
    for (int i = 0; i < 3; i++) {           
        scanf("%f", &student.marks[i]);
    }
    printf("Enter grade: ");
    scanf(" %c", &student.grade);
    printf("\nStudent Details (Passed by Value):\n");
    displayStudent(student);
    float total = totalMarks(student);
    printf("Total Marks: %.2f\n", total);
    char newGrade;
    printf("Enter new grade to update: ");
    scanf(" %c", &newGrade);
    updateGrade(&student, newGrade);
    printf("\nUpdated Student Details (Passed by Reference):\n");
    displayStudent(student);
    return 0;
}