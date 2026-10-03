
#include <stdio.h>

int totalMarks(int marks[], int n) {
    int i, total = 0;

    for (i = 0; i < n; i++)
        total += marks[i];

    return total;
}

double percentage(int total) {
    return total / 5.0;
}

int passed(int marks[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        if (marks[i] < 40)
            return 0;
    }

    return 1;
}

char grade(double p) {
    if (p >= 90) return 'A';
    if (p >= 80) return 'B';
    if (p >= 70) return 'C';
    if (p >= 60) return 'D';
    if (p >= 40) return 'E';
    return 'F';
}

int main(void) {
    int marks[5], i, total;
    double p;

    printf("Enter marks in five subjects (out of 100):\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks.\n");
            return 0;
        }
    }

    total = totalMarks(marks, 5);
    p = percentage(total);

    printf("Total marks = %d / 500\n", total);
    printf("Percentage = %.2f%%\n", p);
    printf("Grade = %c\n", grade(p));

    if (passed(marks, 5))
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}