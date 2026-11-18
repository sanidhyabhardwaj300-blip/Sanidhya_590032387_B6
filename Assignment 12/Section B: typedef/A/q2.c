#include <stdio.h>

enum Result {
    FAIL,
    PASS,
    DISTINCTION
};

enum Result getResult(float marks) {
    if (marks >= 75)
        return DISTINCTION;
    else if (marks >= 40)
        return PASS;
    else
        return FAIL;
}

int main() {
    float marks;
    enum Result result;

    printf("Enter average marks: ");
    scanf("%f", &marks);

    result = getResult(marks);

    if (result == DISTINCTION)
        printf("Result: DISTINCTION\n");
    else if (result == PASS)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    printf("Numeric Value: %d\n", result);

    return 0;
}