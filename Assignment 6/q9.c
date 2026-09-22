#include <stdio.h>

int main() {
    int choice, num, original, reversed, remainder, sum, count, temp, digits, isPrime, i;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Palindrome
                printf("Enter a number: ");
                scanf("%d", &num);
                original = num;
                reversed = 0;
                while (num > 0) {
                    remainder = num % 10;
                    reversed = reversed * 10 + remainder;
                    num = num / 10;
                }
                if (original == reversed)
                    printf("%d is a Palindrome.\n", original);
                else
                    printf("%d is not a Palindrome.\n", original);
                break;

            case 2: // Armstrong
                printf("Enter a number: ");
                scanf("%d", &num);
                original = num;
                sum = 0;
                digits = 0;
                temp = num;

                while (temp > 0) {
                    digits++;
                    temp = temp / 10;
                }

                temp = num;
                while (temp > 0) {
                    remainder = temp % 10;
                    int power = 1;
                    for (i = 1; i <= digits; i++)
                        power = power * remainder;
                    sum = sum + power;
                    temp = temp / 10;
                }

                if (sum == original)
                    printf("%d is an Armstrong number.\n", original);
                else
                    printf("%d is not an Armstrong number.\n", original);
                break;

            case 3: // Prime
                printf("Enter a number: ");
                scanf("%d", &num);
                isPrime = 1;
                if (num <= 1)
                    isPrime = 0;
                else {
                    for (i = 2; i * i <= num; i++) {
                        if (num % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }
                if (isPrime)
                    printf("%d is a Prime number.\n", num);
                else
                    printf("%d is not a Prime number.\n", num);
                break;

            case 4: // Sum of Digits
                printf("Enter a number: ");
                scanf("%d", &num);
                sum = 0;
                while (num > 0) {
                    sum = sum + (num % 10);
                    num = num / 10;
                }
                printf("Sum of digits = %d\n", sum);
                break;

            case 5: // Count Digits
                printf("Enter a number: ");
                scanf("%d", &num);
                count = 0;
                if (num == 0)
                    count = 1;
                else {
                    while (num > 0) {
                        count++;
                        num = num / 10;
                    }
                }
                printf("Number of digits = %d\n", count);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}